require "base"

local func_next_CCheckBox_test_scene = nil;
local func_back_CCheckBox_test_scene = nil;
local func_ref_CCheckBox_test_scene = nil;

-- createCCheckBoxBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCCheckBoxBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CCheckBox_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CCheckBox_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CCheckBox_test_scene();
	end);
	
	p_base_scene.setTitle("CCheckBoxBasicTest");
	p_base_scene.setDescription("checkbox face, click it");
	
	local m_pText = CLabel:create();
	m_pText:setAnchorPoint(CCPoint(0, 0.5));
	m_pText:setPosition(CCPoint(380, 400));
	m_pText:setFontSize(35.0);
	m_pText:setString("none");
	p_base_scene.p_layout:addChild(m_pText);
	
	local function onClick(p_sender)
		local pCheckBox = tolua.cast(p_sender, "CCheckBox");
		if pCheckBox:isChecked() then
			m_pText:setString("checked");
		else
			m_pText:setString("unchecked");
		end
	end
	
	local pCheckBox = CCheckBox:create();
	pCheckBox:setNormalImage("ckb_normal_01.png");
	pCheckBox:setNormalPressImage("ckb_normal_02.png");
	pCheckBox:setCheckedImage("ckb_selected_01.png");
	pCheckBox:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox:setOnClickScriptHandler(onClick);
	pCheckBox:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pCheckBox);

	local pCheckBox2 = CCheckBox:create();
	pCheckBox2:setNormalImage("ckb_normal_01.png");
	pCheckBox2:setCheckedImage("ckb_selected_01.png");
	pCheckBox2:setOnClickScriptHandler(onClick);
	pCheckBox2:setPosition(CCPoint(560, 320));
	p_base_scene.p_layout:addChild(pCheckBox2);
	
	return p_base_scene.p_scene;
end


-- createCCheckBoxExclusionTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCCheckBoxExclusionTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CCheckBox_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CCheckBox_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CCheckBox_test_scene();
	end);
	
	p_base_scene.setTitle("CCheckBoxExclusionTest");
	p_base_scene.setDescription("checkbox exclusion test");
	
	local pCheckBox1 = CCheckBox:create();
	pCheckBox1:setNormalImage("ckb_normal_01.png");
	pCheckBox1:setNormalPressImage("ckb_normal_02.png");
	pCheckBox1:setCheckedImage("ckb_selected_01.png");
	pCheckBox1:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox1:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox1:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox1:setPosition(CCPoint(480, 490));
	pCheckBox1:setTag(1);
	pCheckBox1:setExclusion(1);
	pCheckBox1:setChecked(true);
	pCheckBox1:setEnabled(false);
	p_base_scene.p_layout:addChild(pCheckBox1);
	
	local pCheckBox2 = CCheckBox:create();
	pCheckBox2:setNormalImage("ckb_normal_01.png");
	pCheckBox2:setNormalPressImage("ckb_normal_02.png");
	pCheckBox2:setCheckedImage("ckb_selected_01.png");
	pCheckBox2:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox2:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox2:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox2:setPosition(CCPoint(480, 425));
	pCheckBox2:setExclusion(1);
	p_base_scene.p_layout:addChild(pCheckBox2);
	
	local pCheckBox3 = CCheckBox:create();
	pCheckBox3:setNormalImage("ckb_normal_01.png");
	pCheckBox3:setNormalPressImage("ckb_normal_02.png");
	pCheckBox3:setCheckedImage("ckb_selected_01.png");
	pCheckBox3:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox3:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox3:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox3:setPosition(CCPoint(480, 360));
	pCheckBox3:setExclusion(1);
	p_base_scene.p_layout:addChild(pCheckBox3);
	
	local pCheckBox4 = CCheckBox:create();
	pCheckBox4:setNormalImage("ckb_normal_01.png");
	pCheckBox4:setNormalPressImage("ckb_normal_02.png");
	pCheckBox4:setCheckedImage("ckb_selected_01.png");
	pCheckBox4:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox4:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox4:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox4:setPosition(CCPoint(480, 295));
	pCheckBox4:setExclusion(1);
	p_base_scene.p_layout:addChild(pCheckBox4);
	
	local pCheckBox5 = CCheckBox:create();
	pCheckBox5:setNormalImage("ckb_normal_01.png");
	pCheckBox5:setNormalPressImage("ckb_normal_02.png");
	pCheckBox5:setCheckedImage("ckb_selected_01.png");
	pCheckBox5:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox5:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox5:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox5:setPosition(CCPoint(480, 230));
	pCheckBox5:setExclusion(1);
	p_base_scene.p_layout:addChild(pCheckBox5);
	
	local pCheckBox6 = CCheckBox:create();
	pCheckBox6:setNormalImage("ckb_normal_01.png");
	pCheckBox6:setNormalPressImage("ckb_normal_02.png");
	pCheckBox6:setCheckedImage("ckb_selected_01.png");
	pCheckBox6:setCheckedPressImage("ckb_selected_02.png");
	pCheckBox6:setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox6:setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox6:setPosition(CCPoint(480, 165));
	pCheckBox6:setExclusion(1);
	p_base_scene.p_layout:addChild(pCheckBox6);
	
	local function on_click(p_sender)
		pCheckBox1:setChecked(true);
	end
	
	local pButton = CButton:createWith9Sprite(CCSize(280, 60), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setPosition(CCPoint(200, 450));
	pButton:setUserTag(1);
	pButton:setOnClickScriptHandler(on_click);
	pButton:getLabel():setFontSize(30);
	pButton:getLabel():setString("set true for first");
	p_base_scene.p_layout:addChild(pButton);
	
	return p_base_scene.p_scene;
end





local _n_CCheckBox_test_idx = 0;

local function get_CCheckBox_test_scene()
	if _n_CCheckBox_test_idx == 0 then
		return createCCheckBoxBasicTest();
	elseif _n_CCheckBox_test_idx == 1 then
		return createCCheckBoxExclusionTest();
	else
		_n_CCheckBox_test_idx = 0;
		return createCCheckBoxBasicTest();
	end
	return nil;
end

function push_CCheckBox_test_scene()
	_n_CCheckBox_test_idx = 0;
	local p_scene = get_CCheckBox_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CCheckBox_test_scene = function()
	_n_CCheckBox_test_idx = _n_CCheckBox_test_idx + 1;
	local p_scene = get_CCheckBox_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CCheckBox_test_scene = function()
	_n_CCheckBox_test_idx = _n_CCheckBox_test_idx - 1;
	local p_scene = get_CCheckBox_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CCheckBox_test_scene = function()
	local p_scene = get_CCheckBox_test_scene();
	_p_director:replaceScene(p_scene);
end




























