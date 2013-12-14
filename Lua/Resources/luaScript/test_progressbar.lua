require "base"

local func_next_CProgressBar_test_scene = nil;
local func_back_CProgressBar_test_scene = nil;
local func_ref_CProgressBar_test_scene = nil;

-- createCProgressBarBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCProgressBarBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CProgressBar_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CProgressBar_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CProgressBar_test_scene();
	end);
	
	p_base_scene.setTitle("CProgressBarBasicTest");
	p_base_scene.setDescription("click the button to changed progress");
	
	
	local m_pText = nil;
	local m_pProgressBar = nil;
	
	local function on_progressing(p_sender, n_value)
		m_pText:setString(string.format("value %d, percentage %f", m_pProgressBar:getValue(), m_pProgressBar:getPercentage()));
	end
	
	local function on_click(p_sender)
		local pButton = tolua.cast(p_sender, "CButton");
		if pButton:getUserTag() == 1 then
			m_pProgressBar:setValue(m_pProgressBar:getValue() + 10);
		elseif pButton:getUserTag() == 2 then
			m_pProgressBar:setValue(m_pProgressBar:getValue() - 5);
		elseif pButton:getUserTag() == 3 then
			if m_pProgressBar:getDirection() == eProgressBarDirectionLeftToRight then
				m_pProgressBar:setDirection(eProgressBarDirectionRightToLeft);
			else
				m_pProgressBar:setDirection(eProgressBarDirectionLeftToRight);
			end
		elseif pButton:getUserTag() == 4 then
			m_pProgressBar:startProgress(100, 5.0);
		elseif pButton:getUserTag() == 5 then
			m_pProgressBar:stopProgress();
		end
	end
	
	local m_pBg = CCSprite:create("background.png");
	m_pBg:setScale(1.3);
	m_pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(m_pBg);

	m_pProgressBar = CProgressBar:create("progress.png");
	m_pProgressBar:setBackgroundImage("progress_bg.png");
	m_pProgressBar:setPosition(CCPoint(480, 320));
	m_pProgressBar:setMaxValue(100);
	m_pProgressBar:setMinValue(0);
	m_pProgressBar:setDirection(eProgressBarDirectionLeftToRight);
	m_pProgressBar:setOnValueChangedScriptHandler(on_progressing);
	m_pProgressBar:setContentSize(CCSize(960, 640));
	p_base_scene.p_layout:addChild(m_pProgressBar);

	local pButton = CButton:createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setPosition(CCPoint(250, 450));
	pButton:setUserTag(1);
	pButton:setOnClickScriptHandler(on_click);
	pButton:getLabel():setFontSize(30);
	pButton:getLabel():setString("Add");
	p_base_scene.p_layout:addChild(pButton);

	local pButton2 = CButton:createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton2:setPosition(CCPoint(450, 450));
	pButton2:setUserTag(2);
	pButton2:setOnClickScriptHandler(on_click);
	pButton2:getLabel():setFontSize(30);
	pButton2:getLabel():setString("Less");
	p_base_scene.p_layout:addChild(pButton2);

	local pButton3 = CButton:createWith9Sprite(CCSize(200, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton3:setPosition(CCPoint(670, 450));
	pButton3:setUserTag(3);
	pButton3:setOnClickScriptHandler(on_click);
	pButton3:getLabel():setFontSize(30);
	pButton3:getLabel():setString("change direction");
	p_base_scene.p_layout:addChild(pButton3);

	local pButton4 = CButton:createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton4:setPosition(CCPoint(350, 200));
	pButton4:setUserTag(4);
	pButton4:setOnClickScriptHandler(on_click);
	pButton4:getLabel():setFontSize(30);
	pButton4:getLabel():setString("startProgress");
	pButton4:updateCascadeLabelContentSize(CCSize(50, 30));
	p_base_scene.p_layout:addChild(pButton4);

	local pButton5 = CButton:createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton5:setPosition(CCPoint(650, 200));
	pButton5:setUserTag(5);
	pButton5:setOnClickScriptHandler(on_click);
	pButton5:getLabel():setFontSize(30);
	pButton5:getLabel():setString("stopProgress");
	pButton5:updateCascadeLabelContentSize(CCSize(50, 30));
	p_base_scene.p_layout:addChild(pButton5);
	
	m_pText = CLabel:create();
	m_pText:setAnchorPoint(CCPoint(0, 0.5));
	m_pText:setPosition(CCPoint(200, 400));
	m_pText:setFontSize(35.0);
	m_pText:setString("none");
	p_base_scene.p_layout:addChild(m_pText);
	
	return p_base_scene.p_scene;
end




local _n_CProgressBar_test_idx = 0;

local function get_CProgressBar_test_scene()
	if _n_CProgressBar_test_idx == 0 then
		return createCProgressBarBasicTest();
	else
		_n_CProgressBar_test_idx = 0;
		return createCProgressBarBasicTest();
	end
	return nil;
end

function push_CProgressBar_test_scene()
	_n_CProgressBar_test_idx = 0;
	local p_scene = get_CProgressBar_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CProgressBar_test_scene = function()
	_n_CProgressBar_test_idx = _n_CProgressBar_test_idx + 1;
	local p_scene = get_CProgressBar_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CProgressBar_test_scene = function()
	_n_CProgressBar_test_idx = _n_CProgressBar_test_idx - 1;
	local p_scene = get_CProgressBar_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CProgressBar_test_scene = function()
	local p_scene = get_CProgressBar_test_scene();
	_p_director:replaceScene(p_scene);
end




























