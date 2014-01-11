require "base"

local func_next_CControlViewView_test_scene = nil;
local func_back_CControlViewView_test_scene = nil;
local func_ref_CControlViewView_test_scene = nil;

-- createCControlViewViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCControlViewViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CControlViewView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CControlViewView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CControlViewView_test_scene();
	end);
	
	p_base_scene.setTitle("CControlViewViewBasicTest");
	p_base_scene.setDescription("control the icon to move");
	
	local m_pIcon = nil;
	
	local function on_control(p_sender, fx, fy)
		local x, y =  m_pIcon:getPosition();
		m_pIcon:setPosition(ccp(x + fx, fy + y));
	end

	m_pIcon = CCSprite:create("icon.png");
	m_pIcon:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(m_pIcon);

	local pView = CControlView:create("control_baseboard.png", "control_joystick.png");
	pView:setPosition(CCPoint(100, 100));
	pView:setRadius(pView:getContentSize().width / 2);
	pView:setOnControlScriptHandler(on_control);
	pView:setAnchorPoint(ccp(0,0));
	pView:setScale(1.5);
	pView:setOpacity(200);
	p_base_scene.p_window:addChild(pView);

	local pView2 = CControlView:create();
	pView2:setBaseBoardImage("control_baseboard.png");
	pView2:setPosition(CCPoint(860, 100));
	pView2:setRadius(pView2:getContentSize().width / 2);
	pView2:setOnControlScriptHandler(on_control);
	pView2:setAnchorPoint(CCPoint(1, 0));
	pView2:setScale(1.5);
	pView2:setOpacity(200);
	p_base_scene.p_window:addChild(pView2);

	
	return p_base_scene.p_scene;
end




local _n_CControlViewView_test_idx = 0;

local function get_CControlViewView_test_scene()
	if _n_CControlViewView_test_idx == 0 then
		return createCControlViewViewBasicTest();
	else
		_n_CControlViewView_test_idx = 0;
		return createCControlViewViewBasicTest();
	end
	return nil;
end

function push_CControlViewView_test_scene()
	_n_CControlViewView_test_idx = 0;
	local p_scene = get_CControlViewView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CControlViewView_test_scene = function()
	_n_CControlViewView_test_idx = _n_CControlViewView_test_idx + 1;
	local p_scene = get_CControlViewView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CControlViewView_test_scene = function()
	_n_CControlViewView_test_idx = _n_CControlViewView_test_idx - 1;
	local p_scene = get_CControlViewView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CControlViewView_test_scene = function()
	local p_scene = get_CControlViewView_test_scene();
	_p_director:replaceScene(p_scene);
end




























