require "base"

local func_next_CSlider_test_scene = nil;
local func_back_CSlider_test_scene = nil;
local func_ref_CSlider_test_scene = nil;

-- createCSliderBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCSliderBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CSlider_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CSlider_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CSlider_test_scene();
	end);
	
	p_base_scene.setTitle("CSliderBasicTest");
	p_base_scene.setDescription("Slider From ProgressBar in vertical direction");
	
	local m_pSlider = nil;
	
	local m_pText = CLabel:create();
	m_pText:setAnchorPoint(CCPoint(0, 0.5));
	m_pText:setPosition(CCPoint(380, 400));
	m_pText:setFontSize(35.0);
	m_pText:setString("none");
	p_base_scene.p_window:addChild(m_pText);
	
	local function on_value_changing(p_sender, n_value)
		m_pText:setString(string.format("value %d, percentage %f", m_pSlider:getValue(), m_pSlider:getPercentage()));
	end

	m_pSlider = CSlider:create("slider.png", "progress_v.png");
	m_pSlider:setBackgroundImage("progress_v_bg.png");
	m_pSlider:setPosition(CCPoint(130, 320));
	m_pSlider:setMaxValue(100);
	m_pSlider:setMinValue(0);
	m_pSlider:setDirection(eProgressBarDirectionBottomToTop);
	m_pSlider:setOnValueChangedScriptHandler(on_value_changing);
	p_base_scene.p_window:addChild(m_pSlider);
	
	return p_base_scene.p_scene;
end


-- createCSliderWithScrollTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCSliderWithScrollTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CSlider_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CSlider_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CSlider_test_scene();
	end);
	
	p_base_scene.setTitle("CSliderWithScrollTest");
	p_base_scene.setDescription("Slider With ScrollView");
	
	
	local m_pScrollView = CScrollView:create(CCSize(480, 320));
	m_pScrollView:setBackgroundImage("background.png");
	m_pScrollView:setContainerSize(CCSize(3100, 320));
	m_pScrollView:setDirection(eScrollViewDirectionHorizontal);
	m_pScrollView:setPosition(CCPoint(480, 350));
	m_pScrollView:setDragable(false);
	p_base_scene.p_window:addChild(m_pScrollView);

	local x = 100.0;
	for i = 0, 29, 1 do
		local pIcon = CButton:createWith9Sprite(CCSize(60, 60), "sprite9_btn1.png", "sprite9_btn2.png");
		pIcon:getLabel():setFontSize(25);
		pIcon:getLabel():setString(tostring(i + 1));
		pIcon:setPosition(CCPoint( x , 160 ));
		m_pScrollView:getContainer():addChild(pIcon);
		x = x + 100.0;
	end
	
	local function on_value_changing(p_sender, n_value)
		m_pScrollView:setContentOffset(CCPoint((-n_value), 0));
	end

	m_pSlider = CSlider:create();
	m_pSlider:setSliderImage("slider.png");
	m_pSlider:setProgressImage("progress.png");
	m_pSlider:setBackgroundImage("progress_bg.png");

	m_pSlider:setPosition(CCPoint(480, 140));
	m_pSlider:setMaxValue( m_pScrollView:getContainer():getContentSize().width - m_pScrollView:getContentSize().width );
	m_pSlider:setMinValue(0);
	m_pSlider:setValue(0);
	m_pSlider:setOnValueChangedScriptHandler(on_value_changing);
	p_base_scene.p_window:addChild(m_pSlider);

	return p_base_scene.p_scene;
end



local _n_CSlider_test_idx = 0;

local function get_CSlider_test_scene()
	if _n_CSlider_test_idx == 0 then
		return createCSliderBasicTest();
	elseif _n_CSlider_test_idx == 1 then
		return createCSliderWithScrollTest();
	else
		_n_CSlider_test_idx = 0;
		return createCSliderBasicTest();
	end
	return nil;
end

function push_CSlider_test_scene()
	_n_CSlider_test_idx = 0;
	local p_scene = get_CSlider_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CSlider_test_scene = function()
	_n_CSlider_test_idx = _n_CSlider_test_idx + 1;
	local p_scene = get_CSlider_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CSlider_test_scene = function()
	_n_CSlider_test_idx = _n_CSlider_test_idx - 1;
	local p_scene = get_CSlider_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CSlider_test_scene = function()
	local p_scene = get_CSlider_test_scene();
	_p_director:replaceScene(p_scene);
end




























