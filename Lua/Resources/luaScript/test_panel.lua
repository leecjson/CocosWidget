require "base"

local func_next_CPanel_test_scene = nil;
local func_back_CPanel_test_scene = nil;
local func_ref_CPanel_test_scene = nil;

-- createCPanelBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCPanelBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CPanel_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CPanel_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CPanel_test_scene();
	end);
	
	p_base_scene.setTitle("CPanelBasicTest");
	p_base_scene.setDescription("some things in panel");

	local pPanel = CPanel:create();
	pPanel:setPosition(CCPoint(480 ,320));
	pPanel:setContentSize(CCSize(480, 320));
	pPanel:setBackgroundImage("background.png");
	p_base_scene.p_layout:addChild(pPanel);

	local pButton = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setPosition(CCPoint(150, 100));
	pPanel:addChild(pButton);

	local pImage = CImageView:create("icon.png");
	pImage:setPosition(CCPoint(200, 150));
	pPanel:addChild(pImage);
	
	return p_base_scene.p_scene;
end


-- createCPanelColorTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCPanelColorTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CPanel_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CPanel_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CPanel_test_scene();
	end);
	
	p_base_scene.setTitle("CPanelColorTest");
	p_base_scene.setDescription("color panel");
	
	local pPanel = CPanelColor:create(ccc4(255, 0, 0, 255));
	pPanel:setPosition(CCPoint(480 ,320));
	pPanel:setContentSize(CCSize(480, 320));
	p_base_scene.p_layout:addChild(pPanel);


	return p_base_scene.p_scene;
end






local _n_CPanel_test_idx = 0;

local function get_CPanel_test_scene()
	if _n_CPanel_test_idx == 0 then
		return createCPanelBasicTest();
	elseif _n_CPanel_test_idx == 1 then
		return createCPanelColorTest();
	else
		_n_CPanel_test_idx = 0;
		return createCPanelBasicTest();
	end
	return nil;
end

function push_CPanel_test_scene()
	_n_CPanel_test_idx = 0;
	local p_scene = get_CPanel_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CPanel_test_scene = function()
	_n_CPanel_test_idx = _n_CPanel_test_idx + 1;
	local p_scene = get_CPanel_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CPanel_test_scene = function()
	_n_CPanel_test_idx = _n_CPanel_test_idx - 1;
	local p_scene = get_CPanel_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CPanel_test_scene = function()
	local p_scene = get_CPanel_test_scene();
	_p_director:replaceScene(p_scene);
end




























