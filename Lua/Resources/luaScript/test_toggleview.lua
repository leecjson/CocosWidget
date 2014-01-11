require "base"

local func_next_CToggleView_test_scene = nil;
local func_back_CToggleView_test_scene = nil;
local func_ref_CToggleView_test_scene = nil;

-- createCToggleViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCToggleViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CToggleView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CToggleView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CToggleView_test_scene();
	end);
	
	p_base_scene.setTitle("CToggleViewBasicTest");
	p_base_scene.setDescription("toggle button");
	

	local m_pText = CLabel:create();
	m_pText:setAnchorPoint(CCPoint(0, 0.5));
	m_pText:setPosition(CCPoint(380, 400));
	m_pText:setFontSize(35.0);
	m_pText:setString("none");
	p_base_scene.p_window:addChild(m_pText);
	
	local pToggle = CToggleView:create("toggle1_2.png", "toggle1_1.png");
	pToggle:setOnClickScriptHandler(function(p_sender)
		if pToggle:isChecked() == true then
			m_pText:setString("checked");
		else
			m_pText:setString("unchecked");
		end
	end);
	pToggle:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pToggle);

	
	return p_base_scene.p_scene;
end



-- createCToggleViewGroupTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCToggleViewGroupTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CToggleView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CToggleView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CToggleView_test_scene();
	end);
	
	p_base_scene.setTitle("CToggleViewGroupTest");
	p_base_scene.setDescription("Toggle button in group");
	
	local function on_click(p_sender, b_checked)
		local p_toggle = tolua.cast(p_sender, "CToggleView");
		local p_text = p_toggle:getUserObject();
		if b_checked then
			p_text:setString("checked");
		else
			p_text:setString("unchecked");
		end
	end
	
	local pToggle1 = CToggleView:create("toggle1_2.png", "toggle1_1.png");
	pToggle1:setOnCheckScriptHandler(on_click);
	pToggle1:setPosition(CCPoint(200, 450));
	pToggle1:setExclusion(1);
	p_base_scene.p_window:addChild(pToggle1);

	local pToggle2 = CToggleView:create("toggle1_2.png", "toggle1_1.png");
	pToggle2:setOnCheckScriptHandler(on_click);
	pToggle2:setPosition(CCPoint(200, 350));
	pToggle2:setExclusion(1);
	p_base_scene.p_window:addChild(pToggle2);

	local pToggle3 = CToggleView:create("toggle1_2.png", "toggle1_1.png");
	pToggle3:setOnCheckScriptHandler(on_click);
	pToggle3:setPosition(CCPoint(200, 250));
	pToggle3:setExclusion(1);
	p_base_scene.p_window:addChild(pToggle3);

	local pText1 = CLabel:create();
	pText1:setAnchorPoint(CCPoint(0, 0.5));
	pText1:setPosition(CCPoint(350, 450));
	pText1:setFontSize(35.0);
	pText1:setString("none");
	p_base_scene.p_window:addChild(pText1);
	pToggle1:setUserObject(pText1);

	local pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(0, 0.5));
	pText2:setPosition(CCPoint(350, 350));
	pText2:setFontSize(35.0);
	pText2:setString("none");
	p_base_scene.p_window:addChild(pText2);
	pToggle2:setUserObject(pText2);

	local pText3 = CLabel:create();
	pText3:setAnchorPoint(CCPoint(0, 0.5));
	pText3:setPosition(CCPoint(350, 250));
	pText3:setFontSize(35.0);
	pText3:setString("none");
	p_base_scene.p_window:addChild(pText3);
	pToggle3:setUserObject(pText3);

	local pToggle4 = CToggleView:create("toggle1_2.png", "toggle1_1.png");
	pToggle4:setPosition(CCPoint(700, 250));
	pToggle4:setExclusion(2);
	p_base_scene.p_window:addChild(pToggle4);

	local pToggle5 = CToggleView:create("toggle1_2.png", "toggle1_1.png");
	pToggle5:setPosition(CCPoint(700, 350));
	pToggle5:setExclusion(2);
	p_base_scene.p_window:addChild(pToggle5);
	
	return p_base_scene.p_scene;
end









local _n_CToggleView_test_idx = 0;

local function get_CToggleView_test_scene()
	if _n_CToggleView_test_idx == 0 then
		return createCToggleViewBasicTest();
	elseif _n_CToggleView_test_idx == 1 then
		return createCToggleViewGroupTest();
	else
		_n_CToggleView_test_idx = 0;
		return createCToggleViewBasicTest();
	end
	return nil;
end

function push_CToggleView_test_scene()
	_n_CToggleView_test_idx = 0;
	local p_scene = get_CToggleView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CToggleView_test_scene = function()
	_n_CToggleView_test_idx = _n_CToggleView_test_idx + 1;
	local p_scene = get_CToggleView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CToggleView_test_scene = function()
	_n_CToggleView_test_idx = _n_CToggleView_test_idx - 1;
	local p_scene = get_CToggleView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CToggleView_test_scene = function()
	local p_scene = get_CToggleView_test_scene();
	_p_director:replaceScene(p_scene);
end




























