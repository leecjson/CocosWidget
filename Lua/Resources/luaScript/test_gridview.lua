require "base"

local func_next_CGridView_test_scene = nil;
local func_back_CGridView_test_scene = nil;
local func_ref_CGridView_test_scene = nil;

-- createCGridViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCGridViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CGridView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CGridView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CGridView_test_scene();
	end);
	
	p_base_scene.setTitle("CGridViewBasicTest");
	p_base_scene.setDescription("GridView basic test (only work in vertical)");
	
	local function data_source(p_convertview, idx)
		local pCell = tolua.cast(p_convertview,"CGridViewCell")
		local pButton = nil;

		if pCell == nil then
			pCell = CGridViewCell:new();
			pCell:autorelease();

			pButton = CButton:createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
			pButton:setPosition(CCPoint(480 / 5 / 2, 320 / 4 / 2));
			pButton:getLabel():setFontSize(25.0);
			pButton:setTag(1);
			pCell:addChild(pButton);
		else
			pButton = tolua.cast(pCell:getChildByTag(1), "CButton");
		end

		pButton:getLabel():setString(tostring(idx));
		pButton:setUserTag(idx);

		return pCell;
	end

	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pBg);

	local pGridView = CGridView:create(CCSize(480, 320));
	pGridView:setSizeOfCell(CCSize(480 / 5, 320 / 4));
	pGridView:setCountOfCell(96);
	pGridView:setDataSourceAdapterScriptHandler(data_source);
	pGridView:setColumns(5);
	pGridView:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pGridView);
	pGridView:setAutoRelocate(true);
	pGridView:reloadData();
	
	return p_base_scene.p_scene;
end






local _n_CGridView_test_idx = 0;

local function get_CGridView_test_scene()
	if _n_CGridView_test_idx == 0 then
		return createCGridViewBasicTest();
	else
		_n_CGridView_test_idx = 0;
		return createCGridViewBasicTest();
	end
	return nil;
end

function push_CGridView_test_scene()
	_n_CGridView_test_idx = 0;
	local p_scene = get_CGridView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CGridView_test_scene = function()
	_n_CGridView_test_idx = _n_CGridView_test_idx + 1;
	local p_scene = get_CGridView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CGridView_test_scene = function()
	_n_CGridView_test_idx = _n_CGridView_test_idx - 1;
	local p_scene = get_CGridView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CGridView_test_scene = function()
	local p_scene = get_CGridView_test_scene();
	_p_director:replaceScene(p_scene);
end




























