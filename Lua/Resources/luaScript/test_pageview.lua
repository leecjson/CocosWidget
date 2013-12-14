require "base"

local func_next_CPageView_test_scene = nil;
local func_back_CPageView_test_scene = nil;
local func_ref_CPageView_test_scene = nil;

-- createCPageViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCPageViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CPageView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CPageView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CPageView_test_scene();
	end);
	
	p_base_scene.setTitle("CPageViewBasicTest");
	p_base_scene.setDescription("PageView basic test");
	
	local function data_source(p_convertview, idx)
		local pPageCell = tolua.cast(p_convertview, "CPageViewCell");
		local pButton = nil;

		if pPageCell == nil then
			pPageCell = CPageViewCell:new();
			pPageCell:autorelease();
			pPageCell:setBackgroundImage("background.png");

			pButton = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
			pButton:getLabel():setFontSize(30.0);
			pButton:setPosition(CCPoint(484 / 2, 320 / 2));
			pButton:setTag(1);
			pPageCell:addChild(pButton);
		else
			pButton = tolua.cast(pPageCell:getChildByTag(1), "CButton");
		end
		
		pButton:getLabel():setString(tostring(idx));

		return pPageCell;
	end
	
	local m_pText = CLabel:create();
	m_pText:setAnchorPoint(CCPoint(0, 0.5));
	m_pText:setPosition(CCPoint(800, 320));
	m_pText:setFontSize(35.0);
	m_pText:setString("none");
	p_base_scene.p_layout:addChild(m_pText);
	
	local function on_page_changed(p_sender, idx)
		m_pText:setString(tostring(idx));
	end
	

	local pPageView = CPageView:create(CCSize(484, 320));
	pPageView:setCountOfCell(10);
	pPageView:setDataSourceAdapterScriptHandler(data_source);
	pPageView:setOnPageChangedScriptHandler(on_page_changed);
	pPageView:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pPageView);
	pPageView:reloadData();
	
	return p_base_scene.p_scene;
end


-- createCPageViewVerticalTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCPageViewVerticalTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CPageView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CPageView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CPageView_test_scene();
	end);
	
	p_base_scene.setTitle("CPageViewVerticalTest");
	p_base_scene.setDescription("PageView in vertical");
	
	
	local m_pText = CLabel:create();
	m_pText:setAnchorPoint(CCPoint(0, 0.5));
	m_pText:setPosition(CCPoint(800, 320));
	m_pText:setFontSize(35.0);
	m_pText:setString("none");
	p_base_scene.p_layout:addChild(m_pText);
	
	local function data_source(p_convertview, idx)
		local pPageCell = tolua.cast(p_convertview, "CPageViewCell");
		local pButton = nil;

		if pPageCell == nil then
			pPageCell = CPageViewCell:new();
			pPageCell:autorelease();
			pPageCell:setBackgroundImage("background.png");

			pButton = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
			pButton:getLabel():setFontSize(30.0);
			pButton:setPosition(CCPoint(484 / 2, 320 / 2));
			pButton:setTag(1);
			pPageCell:addChild(pButton);
		else
			pButton = tolua.cast(pPageCell:getChildByTag(1), "CButton");
		end
		
		pButton:getLabel():setString(tostring(idx));

		return pPageCell;
	end
	
	local function on_page_changed(p_sender, idx)
		m_pText:setString(tostring(idx));
	end
	
	local pPageView = CPageView:create(CCSize(484, 320));
	pPageView:setCountOfCell(10);
	pPageView:setDataSourceAdapterScriptHandler(data_source);
	pPageView:setOnPageChangedScriptHandler(on_page_changed);
	pPageView:setPosition(CCPoint(480, 320));
	pPageView:setDirection(eScrollViewDirectionVertical);
	p_base_scene.p_layout:addChild(pPageView);
	pPageView:reloadData();

	return p_base_scene.p_scene;
end





local _n_CPageView_test_idx = 0;

local function get_CPageView_test_scene()
	if _n_CPageView_test_idx == 0 then
		return createCPageViewBasicTest();
	elseif _n_CPageView_test_idx == 1 then
		return createCPageViewVerticalTest();
	else
		_n_CPageView_test_idx = 0;
		return createCPageViewBasicTest();
	end
	return nil;
end

function push_CPageView_test_scene()
	_n_CPageView_test_idx = 0;
	local p_scene = get_CPageView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CPageView_test_scene = function()
	_n_CPageView_test_idx = _n_CPageView_test_idx + 1;
	local p_scene = get_CPageView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CPageView_test_scene = function()
	_n_CPageView_test_idx = _n_CPageView_test_idx - 1;
	local p_scene = get_CPageView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CPageView_test_scene = function()
	local p_scene = get_CPageView_test_scene();
	_p_director:replaceScene(p_scene);
end




























