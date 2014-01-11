require "base"

local func_next_CListView_test_scene = nil;
local func_back_CListView_test_scene = nil;
local func_ref_CListView_test_scene = nil;



-- createCListViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCListViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CListView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CListView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CListView_test_scene();
	end);
	
	p_base_scene.setTitle("CListViewBasicTest");
	p_base_scene.setDescription("ListView Test");
	
	local m_data = {};
	table.insert(m_data, { s = CCSize(480, 10), c = ccc3(255,255,255) });
	table.insert(m_data, { s = CCSize(480, 20), c = ccc3(255,0,0) });
	table.insert(m_data, { s = CCSize(480, 30), c = ccc3(0,255,0) });
	table.insert(m_data, { s = CCSize(100, 40), c = ccc3(255,127,0) });
	table.insert(m_data, { s = CCSize(480, 50), c = ccc3(255,0,255) });
	table.insert(m_data, { s = CCSize(400, 60), c = ccc3(0,0,255) });
	table.insert(m_data, { s = CCSize(300, 80), c = ccc3(255,0,0) });
	table.insert(m_data, { s = CCSize(480, 30), c = ccc3(166,166,166) });
	table.insert(m_data, { s = CCSize(480, 40), c = ccc3(255,255,0) });
	
	
	local m_pListView = nil;
	
	local function onClick(p_sender)
		if table.getn(m_data) > 0 then
			local tagItem = m_data[1];
			local pNode = CCNode:create();
			pNode:setContentSize(tagItem.s);
			local pLayout = CLayout:create();
			pLayout:setBackgroundColor(ccc4(tagItem.c.r, tagItem.c.g, tagItem.c.b, 255));
			pLayout:setAnchorPoint(CCPoint(0.5, 0.5));
			pLayout:setContentSize(CCSize(tagItem.s.width - 4, tagItem.s.height - 2));
			pLayout:setPosition(CCPoint(tagItem.s.width/2, tagItem.s.height/2));
			pNode:addChild(pLayout);
			m_pListView:insertNodeAtLast(pNode);
			m_pListView:reloadData();
			table.remove(m_data, 1);
		end
	end
	
	m_pListView = CListView:create(CCSize(480, 320));
	m_pListView:setBackgroundImage("background.png");
	m_pListView:setPosition(CCPoint(480, 320));
	m_pListView:setDirection(eScrollViewDirectionVertical);
	p_base_scene.p_window:addChild(m_pListView);

	local pButton = CButton:createWith9Sprite(CCSize(150, 50),"sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setPosition(CCPoint(150, 320));
	pButton:setOnClickScriptHandler(onClick);
	pButton:getLabel():setFontSize(30);
	pButton:getLabel():setString("Add");
	p_base_scene.p_window:addChild(pButton);

	
	return p_base_scene.p_scene;
end


-- createCListViewOperateTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCListViewOperateTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CListView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CListView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CListView_test_scene();
	end);
	
	p_base_scene.setTitle("CListViewOperateTest");
	p_base_scene.setDescription("Add or Remove operate");
	
	local last_add_idx = 0;
	local m_pListView = nil;
	
	local function func_on_click(p_sender)
		local pButton = tolua.cast(p_sender, "CButton");	
		if pButton:getUserTag() == 1 then
			local pLayout = CLayout:create();
			pLayout:setContentSize(CCSize(480, 30));

			local pColor = CColorView:create(ccc4(128, 0, 0, 255));
			pColor:setContentSize(CCSize(480 - 4, 30 - 2));
			pColor:setPosition(CCPoint(480 /2, 30 /2));
			pLayout:addChild(pColor);

			local pButton =  CButton:createWith9Sprite(CCSize(150, 25),"sprite9_btn1.png", "sprite9_btn2.png");
			pButton:setPosition(CCPoint(480 /2, 30 /2));
			pButton:getLabel():setFontSize(20);
			pButton:getLabel():setString(tostring(last_add_idx));
			pLayout:addChild(pButton);
			last_add_idx = last_add_idx + 1;

			m_pListView:insertNodeAtLast(pLayout);
			m_pListView:reloadData();
			
		elseif pButton:getUserTag() == 2 then
		
			local pLayout = CLayout:create();
			pLayout:setContentSize(CCSize(480, 30));

			local pColor = CColorView:create(ccc4(0, 128, 0, 255));
			pColor:setContentSize(CCSize(480 - 4, 30 - 2));
			pColor:setPosition(CCPoint(480 /2, 30 /2));
			pLayout:addChild(pColor);

			local pButton =  CButton:createWith9Sprite(CCSize(150, 25),
					"sprite9_btn1.png", "sprite9_btn2.png");
			pButton:setPosition(CCPoint(480 /2, 30 /2));
			pButton:getLabel():setFontSize(20);
			pButton:getLabel():setString(tostring(last_add_idx));
			pLayout:addChild(pButton);
			last_add_idx = last_add_idx + 1;

			m_pListView:insertNodeAtFront(pLayout);
			m_pListView:reloadData();
			
		elseif pButton:getUserTag() == 3 then
		
			m_pListView:removeLastNode();
			m_pListView:reloadData();
			
		elseif pButton:getUserTag() == 4 then
		
			m_pListView:removeFrontNode();
			m_pListView:reloadData();
			
		end
	end
	
	m_pListView = CListView:create(CCSize(480, 320));
	m_pListView:setBackgroundImage("background.png");
	m_pListView:setPosition(CCPoint(480, 320));
	m_pListView:setDirection(eScrollViewDirectionVertical);
	p_base_scene.p_window:addChild(m_pListView);

	local pButton = CButton:createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setPosition(CCPoint(150, 450));
	pButton:setUserTag(1);
	pButton:setOnClickScriptHandler(func_on_click);
	pButton:getLabel():setFontSize(30);
	pButton:getLabel():setString("Add Last");
	p_base_scene.p_window:addChild(pButton);

	local pButton2 = CButton:createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton2:setPosition(CCPoint(150, 380));
	pButton2:setUserTag(2);
	pButton2:setOnClickScriptHandler(func_on_click);
	pButton2:getLabel():setFontSize(30);
	pButton2:getLabel():setString("Add Front");
	p_base_scene.p_window:addChild(pButton2);

	local pButton3 = CButton:createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton3:setPosition(CCPoint(150, 310));
	pButton3:setUserTag(3);
	pButton3:setOnClickScriptHandler(func_on_click);
	pButton3:getLabel():setFontSize(30);
	pButton3:getLabel():setString("Remove Last");
	p_base_scene.p_window:addChild(pButton3);

	local pButton4 = CButton:createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton4:setPosition(CCPoint(150, 240));
	pButton4:setUserTag(4);
	pButton4:setOnClickScriptHandler(func_on_click);
	pButton4:getLabel():setFontSize(30);
	pButton4:getLabel():setString("Remove Front");
	p_base_scene.p_window:addChild(pButton4);

	return p_base_scene.p_scene;
end





local _n_CListView_test_idx = 0;

local function get_CListView_test_scene()
	if _n_CListView_test_idx == 0 then
		return createCListViewBasicTest();
	elseif _n_CListView_test_idx == 1 then
		return createCListViewOperateTest();
	else
		_n_CListView_test_idx = 0;
		return createCListViewBasicTest();
	end
	return nil;
end

function push_CListView_test_scene()
	_n_CListView_test_idx = 0;
	local p_scene = get_CListView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CListView_test_scene = function()
	_n_CListView_test_idx = _n_CListView_test_idx + 1;
	local p_scene = get_CListView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CListView_test_scene = function()
	_n_CListView_test_idx = _n_CListView_test_idx - 1;
	local p_scene = get_CListView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CListView_test_scene = function()
	local p_scene = get_CListView_test_scene();
	_p_director:replaceScene(p_scene);
end




























