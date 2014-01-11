require "base"

local func_next_CGridPageView_test_scene = nil;
local func_back_CGridPageView_test_scene = nil;
local func_ref_CGridPageView_test_scene = nil;

-- createCGridPageViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCGridPageViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CGridPageView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CGridPageView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CGridPageView_test_scene();
	end);
	
	p_base_scene.setTitle("CGridPageViewBasicTest");
	p_base_scene.setDescription("GridPageView basic test");
	
	local function data_source(p_convertview, idx)
		local pCell = tolua.cast(p_convertview, "CGridPageViewCell");
		local pButton = nil;

		if pCell == nil then
			pCell = CGridPageViewCell:new();
			pCell:autorelease();

			pButton = CButton:createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
			pButton:setPosition(CCPoint(320 / 4 / 2, 390 / 5 / 2));
			pButton:getLabel():setFontSize(25.0);
			pButton:setTag(5);
			pCell:addChild(pButton);
		else
			pButton = tolua.cast(pCell:getChildByTag(5), "CButton");
		end
		
		if idx ~= -1 then
			pButton:setVisible(true);
			pButton:getLabel():setString(tostring(idx));
			pButton:setUserTag(idx);
		else
			pButton:setVisible(false);
		end
		return pCell;
	end
	
	local pBg = CCSprite:create("background2.png");
	pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pBg);

	local pTable = CGridPageView:create(CCSizeMake(320, 390));
	pTable:setSizeOfCell(CCSizeMake(320 / 4, 390 / 5));
	pTable:setCountOfCell(72);
	pTable:setDataSourceAdapterScriptHandler(data_source);
	pTable:setColumns(4);
	pTable:setRows(5);
	pTable:setAutoRelocate(true);
	pTable:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pTable);
	pTable:reloadData();
	
	return p_base_scene.p_scene;
end


-- createCGridPageViewBackPackTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCGridPageViewBackPackTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CGridPageView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CGridPageView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CGridPageView_test_scene();
	end);
	
	p_base_scene.setTitle("CGridPageViewBackPackTest");
	p_base_scene.setDescription("backpack test, long click item and drag into circle for remove");
	
	local m_vData = {};
	local m_pSelectedSprite = nil;
	local m_pToggleImage = nil;
	local pTable = nil;
	
	for i = 0, 71, 1 do
		m_vData[i + 1] = i;
	end

	local pBg = CCSprite:create("background2.png");
	pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pBg);
	
	
	local function on_item_longclick(p_sender, p_touch)
		local pIconButton = tolua.cast(p_sender, "CButton");
		pIconButton:setVisible(false);
		m_pSelectedSprite:setVisible(true);
		m_pSelectedSprite:setPosition(p_touch:getLocation());
		return true;
	end
	
	local function on_afterlongclick_moved(p_sender, p_touch, f_duration)
		m_pSelectedSprite:setPosition(p_touch:getLocation());
		local tLayoutPoint = p_base_scene.p_window:convertTouchToNodeSpace(p_touch);
		if m_pToggleImage:boundingBox():containsPoint(tLayoutPoint) == true then
			m_pToggleImage:setChecked(true);
		else
			m_pToggleImage:setChecked(false);
		end
	end
	
	local function on_afterlongclick_ended(p_sender, p_touch, f_duration)
		
		local pIconButton = tolua.cast(p_sender, "CButton");
		m_pSelectedSprite:setPosition(p_touch:getLocation());
		
		pIconButton:setVisible(true); --back to the same as before dragged
		m_pSelectedSprite:setVisible(false);
		m_pToggleImage:setChecked(false);

		local tLayoutPoint = p_base_scene.p_window:convertTouchToNodeSpace(p_touch);
		if m_pToggleImage:boundingBox():containsPoint(tLayoutPoint) == true then
			table.remove(m_vData,pIconButton:getUserTag());
			pTable:setCountOfCell(table.getn(m_vData));
			pTable:reloadData();
		end
	end
	
	p_base_scene.p_window:setOnTouchMovedAfterLongClickScriptHandler(on_afterlongclick_moved);
	p_base_scene.p_window:setOnTouchEndedAfterLongClickScriptHandler(on_afterlongclick_ended);
	p_base_scene.p_window:setOnTouchCancelledAfterLongClickScriptHandler(on_afterlongclick_ended);
	
	local function data_source(p_convertview, idx)
		local pCell = tolua.cast(p_convertview, "CGridPageViewCell");
		local pIconButton = nil;

		if pCell == nil then
			pCell = CGridPageViewCell:new();
			pCell:autorelease();

			local pBg = CImageViewScale9:create("sprite9_btn1.png");
			pBg:setContentSize(CCSize(70, 70));
			pBg:setPosition(CCPoint(320 / 4 / 2, 390 / 5 / 2));
			pCell:addChild(pBg, -1);

			pIconButton = CButton:create("icon.png");
			pIconButton:setOnLongClickScriptHandler(on_item_longclick);
			pIconButton:getLabel():setFontSize(25);
			pIconButton:setPosition(CCPoint(320 / 4 / 2, 390 / 5 / 2));
			pIconButton:setLabelOffset(CCPoint(-15, -15));
			pIconButton:setTag(1);
			pCell:addChild(pIconButton);
		else
			pIconButton = tolua.cast(pCell:getChildByTag(1), "CButton");
		end

		if idx ~= -1 then
			pIconButton:setVisible(true);

			pIconButton:getLabel():setString(tostring(m_vData[idx + 1]));
			pIconButton:setUserTag(idx + 1);
		else
			pIconButton:setVisible(false);
		end

		return pCell;
	end

	pTable = CGridPageView:create(CCSizeMake(320, 390));
	pTable:setDataSourceAdapterScriptHandler(data_source);
	pTable:setSizeOfCell(CCSizeMake(320 / 4, 390 / 5));
	pTable:setCountOfCell(table.getn(m_vData));
	pTable:setColumns(4);
	pTable:setRows(5);
	pTable:setAutoRelocate(true);
	pTable:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pTable);
	pTable:reloadData();

	m_pSelectedSprite = CCSprite:create("icon.png");
	m_pSelectedSprite:setOpacity(170);
	--m_pSelectedSprite:setZOrder(1);
	m_pSelectedSprite:setVisible(false);
	p_base_scene.p_window:addChild(m_pSelectedSprite, 1);

	m_pToggleImage = CToggleView:create("circle1.png", "circle2.png");
	m_pToggleImage:setPosition(CCPoint(200, 320));
	p_base_scene.p_window:addChild(m_pToggleImage);

	return p_base_scene.p_scene;
end




local _n_CGridPageView_test_idx = 0;

local function get_CGridPageView_test_scene()
	if _n_CGridPageView_test_idx == 0 then
		return createCGridPageViewBasicTest();
	elseif _n_CGridPageView_test_idx == 1 then
		return createCGridPageViewBackPackTest();
	else
		_n_CGridPageView_test_idx = 0;
		return createCGridPageViewBasicTest();
	end
	return nil;
end

function push_CGridPageView_test_scene()
	_n_CGridPageView_test_idx = 0;
	local p_scene = get_CGridPageView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CGridPageView_test_scene = function()
	_n_CGridPageView_test_idx = _n_CGridPageView_test_idx + 1;
	local p_scene = get_CGridPageView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CGridPageView_test_scene = function()
	_n_CGridPageView_test_idx = _n_CGridPageView_test_idx - 1;
	local p_scene = get_CGridPageView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CGridPageView_test_scene = function()
	local p_scene = get_CGridPageView_test_scene();
	_p_director:replaceScene(p_scene);
end




























