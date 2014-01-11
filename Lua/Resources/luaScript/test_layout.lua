require "base"

local func_next_CLayout_test_scene = nil;
local func_back_CLayout_test_scene = nil;
local func_ref_CLayout_test_scene = nil;

-- createCLayoutBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCLayoutBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CLayout_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CLayout_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CLayout_test_scene();
	end);
	
	p_base_scene.setTitle("CLayoutBasicTest");
	p_base_scene.setDescription("some things in panel");

	local pLayout = CLayout:create();
	pLayout:setPosition(CCPoint(480 ,320));
	pLayout:setContentSize(CCSize(480, 320));
	pLayout:setBackgroundImage("background.png");
	p_base_scene.p_window:addChild(pLayout);

	local pButton = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setPosition(CCPoint(150, 100));
	pLayout:addChild(pButton);

	local pImage = CImageView:create("icon.png");
	pImage:setPosition(CCPoint(200, 150));
	pLayout:addChild(pImage);
	
	return p_base_scene.p_scene;
end


-- createCLayoutColorTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCLayoutColorTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CLayout_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CLayout_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CLayout_test_scene();
	end);
	
	p_base_scene.setTitle("CLayoutColorTest");
	p_base_scene.setDescription("color panel");
	
	local pLayout = CLayout:create();
	pLayout:setBackgroundColor(ccc4(255, 0, 0, 255));
	pLayout:setPosition(CCPoint(480 ,320));
	pLayout:setContentSize(CCSize(480, 320));
	p_base_scene.p_window:addChild(pLayout);


	return p_base_scene.p_scene;
end


-- createCLayoutGradientTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCLayoutGradientTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CLayout_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CLayout_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CLayout_test_scene();
	end);
	
	p_base_scene.setTitle("CLayoutGradientTest");
	p_base_scene.setDescription("Gradient back ground");
	
	local pLayout = CLayout:create();
	pLayout:setBackgroundGradient(ccc4(255,0,0,255), ccc4(0,255,0,128), CCPoint(1.0, 0.0));
	pLayout:setPosition(CCPoint(480 ,320));
	pLayout:setContentSize(CCSize(480, 320));
	p_base_scene.p_window:addChild(pLayout);


	return p_base_scene.p_scene;
end






local _n_CLayout_test_idx = 0;

local function get_CLayout_test_scene()
	if _n_CLayout_test_idx == 0 then
		return createCLayoutBasicTest();
	elseif _n_CLayout_test_idx == 1 then
		return createCLayoutColorTest();
	elseif _n_CLayout_test_idx == 2 then
		return createCLayoutGradientTest();
	else
		_n_CLayout_test_idx = 0;
		return createCLayoutBasicTest();
	end
	return nil;
end

function push_CLayout_test_scene()
	_n_CLayout_test_idx = 0;
	local p_scene = get_CLayout_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CLayout_test_scene = function()
	_n_CLayout_test_idx = _n_CLayout_test_idx + 1;
	local p_scene = get_CLayout_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CLayout_test_scene = function()
	_n_CLayout_test_idx = _n_CLayout_test_idx - 1;
	local p_scene = get_CLayout_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CLayout_test_scene = function()
	local p_scene = get_CLayout_test_scene();
	_p_director:replaceScene(p_scene);
end




























