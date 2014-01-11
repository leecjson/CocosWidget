require "base"

local func_next_DrawOrderTest_test_scene = nil;
local func_back_DrawOrderTest_test_scene = nil;
local func_ref_DrawOrderTest_test_scene = nil;

-- createDrawOrderTestBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createDrawOrderTestBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_DrawOrderTest_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_DrawOrderTest_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_DrawOrderTest_test_scene();
	end);
	
	p_base_scene.setTitle("DrawOrderTestBasicTest");
	p_base_scene.setDescription("toggle button");
	
	local pButton1 = nil;
	local pButton2 = nil;
	
	local function onClick(p_sender)
		local z1 = pButton1:getZOrder();
		local z2 = pButton2:getZOrder();

		pButton1:retain();
		p_base_scene.p_window:removeChild(pButton1, false);
		p_base_scene.p_window:addChild(pButton1, z2);
		pButton1:release();
		
		pButton2:retain();
		p_base_scene.p_window:removeChild(pButton2, false);
		p_base_scene.p_window:addChild(pButton2, z1);
		pButton2:release();
	end

	local pSwapBtn = CButton:create();
	pSwapBtn:setPosition(CCPoint(170, 320));
	pSwapBtn:setScale9Enabled(true);
	pSwapBtn:setNormalImage("sprite9_btn1.png");
	pSwapBtn:setSelectedImage("sprite9_btn2.png");
	pSwapBtn:initText("swap z order", "", 30);
	pSwapBtn:setCascadeTextSizeEnabled(true, CCSize(50, 30));
	pSwapBtn:setOnClickScriptHandler(onClick);
	p_base_scene.p_window:addChild(pSwapBtn);

	pButton1 = CButton:create("btn1_1.png", "btn1_2.png");
	pButton1:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pButton1, 1);

	pButton2 = CButton:create("btn1_1.png", "btn1_2.png");
	pButton2:setPosition(CCPoint(520, 350));
	p_base_scene.p_window:addChild(pButton2, 2);
	
	return p_base_scene.p_scene;
end




local _n_DrawOrderTest_test_idx = 0;

local function get_DrawOrderTest_test_scene()
	if _n_DrawOrderTest_test_idx == 0 then
		return createDrawOrderTestBasicTest();
	else
		_n_DrawOrderTest_test_idx = 0;
		return createDrawOrderTestBasicTest();
	end
	return nil;
end

function push_DrawOrderTest_test_scene()
	_n_DrawOrderTest_test_idx = 0;
	local p_scene = get_DrawOrderTest_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_DrawOrderTest_test_scene = function()
	_n_DrawOrderTest_test_idx = _n_DrawOrderTest_test_idx + 1;
	local p_scene = get_DrawOrderTest_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_DrawOrderTest_test_scene = function()
	_n_DrawOrderTest_test_idx = _n_DrawOrderTest_test_idx - 1;
	local p_scene = get_DrawOrderTest_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_DrawOrderTest_test_scene = function()
	local p_scene = get_DrawOrderTest_test_scene();
	_p_director:replaceScene(p_scene);
end




























