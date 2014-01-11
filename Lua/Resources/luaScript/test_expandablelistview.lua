require "base"

local func_next_CExpandableListView_test_scene = nil;
local func_back_CExpandableListView_test_scene = nil;
local func_ref_CExpandableListView_test_scene = nil;

-- createCExpandableListViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCExpandableListViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CExpandableListView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CExpandableListView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CExpandableListView_test_scene();
	end);
	
	p_base_scene.setTitle("CExpandableListViewBasicTest");
	p_base_scene.setDescription("click item to expand");
	
	local pListView = nil;
	
	local function onClick(psender)
		local pButton = tolua.cast(psender, "CButton");
		pListView:collapse(pButton:getUserTag());
		pListView:reloadData();
	end
	
	pListView = CExpandableListView:create(CCSize(320, 390));
	pListView:setBackgroundImage("background2.png");
	pListView:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pListView);

	for i = 0, 10, 1 do
		local pExpandableNode = CExpandableNode:create();
		pExpandableNode:setContentSize(CCSize(320, 50));
		pListView:insertExpandableNodeAtLast(pExpandableNode);

		local pExpandableNodeBg = CImageViewScale9:create(CCSize(320, 45), "expandnodebg.png");
		pExpandableNodeBg:setPosition(CCPoint(320/2, 50/2));
		pExpandableNode:addChild(pExpandableNodeBg);

		local pColBtn = CButton:createWith9Sprite(CCSize(35, 35), "sprite9_btn1.png", "sprite9_btn2.png");
		pColBtn:setPosition(ccp(320 - 30, 50 / 2));
		pColBtn:setText("-");
		pColBtn:setUserTag(i);
		pColBtn:setOnClickScriptHandler(onClick);
		pExpandableNode:addChild(pColBtn);

		local pTitleLabel = CLabel:create(string.format("ExpandableNode : %d",i), "", 28);
		pTitleLabel:setPosition(CCPoint(10, 50/2));
		pTitleLabel:setAnchorPoint(CCPoint(0, 0.5));
		pExpandableNode:addChild(pTitleLabel);

		pExpandableNode:insertItemNodeAtLast(CLabel:create(string.format("Label %d - 1", i), "", 30));
		pExpandableNode:insertItemNodeAtLast(CLabel:create(string.format("Label %d - 2", i), "", 30));
		pExpandableNode:insertItemNodeAtLast(CLabel:create(string.format("Label %d - 3", i), "", 30));
		
		local pButton = CButton:createWith9Sprite(CCSize(150, 38), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton:setOnClickScriptHandler(onClick);
		pButton:initText("collapse", "", 28);
		pButton:setUserTag(i);
		pButton:setPosition(CCPoint(100, 40/2));
		local pBtnLayout = CLayout:create(CCSize(320, 40));
		pBtnLayout:addChild(pButton);
		pExpandableNode:insertItemNodeAtLast(pBtnLayout);
	end

	pListView:reloadData();
	
	return p_base_scene.p_scene;
end






local _n_CExpandableListView_test_idx = 0;

local function get_CExpandableListView_test_scene()
	if _n_CExpandableListView_test_idx == 0 then
		return createCExpandableListViewBasicTest();
	else
		_n_CExpandableListView_test_idx = 0;
		return createCExpandableListViewBasicTest();
	end
	return nil;
end

function push_CExpandableListView_test_scene()
	_n_CExpandableListView_test_idx = 0;
	local p_scene = get_CExpandableListView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CExpandableListView_test_scene = function()
	_n_CExpandableListView_test_idx = _n_CExpandableListView_test_idx + 1;
	local p_scene = get_CExpandableListView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CExpandableListView_test_scene = function()
	_n_CExpandableListView_test_idx = _n_CExpandableListView_test_idx - 1;
	local p_scene = get_CExpandableListView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CExpandableListView_test_scene = function()
	local p_scene = get_CExpandableListView_test_scene();
	_p_director:replaceScene(p_scene);
end




























