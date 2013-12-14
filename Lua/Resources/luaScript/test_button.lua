require "base"

local func_next_CButton_test_scene = nil;
local func_back_CButton_test_scene = nil;
local func_ref_CButton_test_scene = nil;

-- createCButtonBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButtonBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButtonBasicTest");
	p_base_scene.setDescription("button by create");
	
	local pButton = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pButton);
	
	return p_base_scene.p_scene;
end

-- createCButtonEventTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButtonEventTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButtonEventTest");
	p_base_scene.setDescription("button events");
	
	
	local p_text1 = CLabel:create();
	p_text1:setAnchorPoint(CCPoint(0, 0));
	p_text1:setPosition(CCPoint(260, 430));
	p_text1:setFontSize(35.0);
	p_text1:setString("none");
	p_base_scene.p_layout:addChild(p_text1);
	
	local p_duration_text = CLabel:create();
	p_duration_text:setPosition(CCPoint(260, 390));
	p_duration_text:setFontSize(35.0);
	p_duration_text:setAnchorPoint(CCPoint(0, 0.5));
	p_base_scene.p_layout:addChild(p_duration_text);
	
	local function set_duraiont(f_duration)
		p_duration_text:setString("ms:"..tostring(f_duration));
	end
	
	local function on_btn_touchbegan(p_sender, p_touch)
		p_text1:setString("Down");
		return eWidgetTouchTransient;
	end
	
	local function on_btn_touchmoved(p_sender, p_touch, f_duration)
		p_text1:setString("Moved");
		set_duraiont(f_duration);
		return true;
	end
	
	local function on_btn_touchended(p_sender, p_touch, f_duration)
		p_text1:setString("Ended");
		set_duraiont(f_duration);
		return true;
	end
	
	local function on_btn_touchcancelled(p_sender, p_touch, f_duration)
		p_text1:setString("Cancelled");
		set_duraiont(f_duration);
		return true;
	end
	
	local pButton1 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1:setOnTouchBeganScriptHandler(on_btn_touchbegan);
	pButton1:setOnTouchMovedScriptHandler(on_btn_touchmoved);
	pButton1:setOnTouchEndedScriptHandler(on_btn_touchended);
	pButton1:setOnTouchCancelledScriptHandler(on_btn_touchcancelled);
	pButton1:setPosition(CCPoint(350, 320));
	p_base_scene.p_layout:addChild(pButton1);
	
	local pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(0, 0.5));
	pText2:setPosition(CCPoint(520, 430));
	pText2:setFontSize(35.0);
	pText2:setString("none");
	p_base_scene.p_layout:addChild(pText2);
	
	local function on_click(p_sender)
		pText2:setString("Clicked");
	end
	
	local pButton2 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2:setOnClickScriptHandler(on_click);
	pButton2:setPosition(CCPoint(610, 320));
	p_base_scene.p_layout:addChild(pButton2);
	
	return p_base_scene.p_scene;
end

-- createCButtonLongClickTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButtonLongClickTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButtonLongClickTest");
	p_base_scene.setDescription("drag the 2s button after long click\n (the touch event will back to CCWidgetLayout after long click)");
	
	local pButton1 = nil;
	local pText1 = nil;
	
	local function on_click(p_sender)
		pText1:setString("Clicked");
	end
	
	local function on_Btn1_long_click(p_sender)
		pText1:setString("Long Clicked");
		return false;
	end
	
	pButton1 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1:setOnClickScriptHandler(on_click);
	pButton1:setOnLongClickScriptHandler(on_Btn1_long_click);
	pButton1:setPosition(CCPoint(350, 320));
	p_base_scene.p_layout:addChild(pButton1);
	
	pText1 = CLabel:create();
	pText1:setAnchorPoint(CCPoint(0, 0.5));
	pText1:setPosition(CCPoint(260, 430));
	pText1:setFontSize(35.0);
	pText1:setString("none");
	p_base_scene.p_layout:addChild(pText1);
	
	local pButton2 = nil;
	local pText2 = nil;
	
	local function on_btn2_long_click(p_sender, p_touch)
		pButton2:setPosition(p_base_scene.p_layout:convertTouchToNodeSpace(p_touch));
		return true;
	end
	
	local function layout_atferlongclick_move(p_sender, p_touch, f_duration)
		pButton2:setPosition(p_base_scene.p_layout:convertTouchToNodeSpace(p_touch));
	end
	
	p_base_scene.p_layout:setOnTouchMovedAfterLongClickScriptHandler(layout_atferlongclick_move);
		
	pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(0, 0.5));
	pText2:setPosition(CCPoint(520, 430));
	pText2:setFontSize(35.0);
	pText2:setString("drag after long click!");
	p_base_scene.p_layout:addChild(pText2);

	pButton2 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2:setOnLongClickScriptHandler(on_btn2_long_click);
	pButton2:setPosition(CCPoint(610, 320));
	p_base_scene.p_layout:addChild(pButton2);
	
	return p_base_scene.p_scene;
end


-- createCButtonWithTextTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButtonWithTextTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButtonWithTextTest");
	p_base_scene.setDescription("TextButton and offset for text");
	
	local pButton1 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1:setPosition(CCPoint(350, 320));
	pButton1:getLabel():setFontSize(32.0);
	pButton1:getLabel():setString("Cocos2d-x");
	p_base_scene.p_layout:addChild(pButton1);

	local pText1 = CLabel:create();
	pText1:setAnchorPoint(CCPoint(0, 0.5));
	pText1:setPosition(CCPoint(260, 430));
	pText1:setFontSize(35.0);
	pText1:setString("Text");
	p_base_scene.p_layout:addChild(pText1);

	local pButton2 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2:getLabel():setFontSize(32.0);
	pButton2:getLabel():setString("CocosWidget");
	pButton2:setLabelOffset(CCPoint(0, 10));
	pButton2:setPosition(CCPoint(610, 320));
	p_base_scene.p_layout:addChild(pButton2);

	local pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(0, 0.5));
	pText2:setPosition(CCPoint(520, 430));
	pText2:setFontSize(35.0);
	pText2:setString("Text With Offset");
	p_base_scene.p_layout:addChild(pText2);
	
	return p_base_scene.p_scene;
end



-- createCButtonAttributeTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButtonAttributeTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButtonAttributeTest");
	p_base_scene.setDescription("");
	
	local pButton1 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1:getLabel():setFontSize(30.0);
	pButton1:getLabel():setString("true");
	pButton1:setPosition(CCPoint(480, 500));
	pButton1:setEnabled(true);
	p_base_scene.p_layout:addChild(pButton1);

	local pButton1ex = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1ex:getLabel():setFontSize(30.0);
	pButton1ex:getLabel():setString("false");
	pButton1ex:setPosition(CCPoint(680, 500));
	pButton1ex:setEnabled(false);
	p_base_scene.p_layout:addChild(pButton1ex);

	local pText1 = CLabel:create();
	pText1:setAnchorPoint(CCPoint(1, 0.5));
	pText1:setPosition(CCPoint(350, 500));
	pText1:setFontSize(35.0);
	pText1:setString("setEnabled()");
	p_base_scene.p_layout:addChild(pText1);

	local pButton2 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2:getLabel():setFontSize(30.0);
	pButton2:getLabel():setString("true");
	pButton2:setPosition(CCPoint(480, 400));
	pButton2:setTouchEnabled(true);
	p_base_scene.p_layout:addChild(pButton2);

	local pButton2ex = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2ex:getLabel():setFontSize(30.0);
	pButton2ex:getLabel():setString("false");
	pButton2ex:setPosition(CCPoint(680, 400));
	pButton2ex:setTouchEnabled(false);
	p_base_scene.p_layout:addChild(pButton2ex);

	local pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(1, 0.5));
	pText2:setPosition(CCPoint(350, 400));
	pText2:setFontSize(35.0);
	pText2:setString("setTouchEnabled()");
	p_base_scene.p_layout:addChild(pText2);
	
	local pButton3 = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton3:getLabel():setFontSize(30.0);
	pButton3:getLabel():setString("true");
	pButton3:setPosition(CCPoint(480, 300));
	pButton3:setVisible(true);
	p_base_scene.p_layout:addChild(pButton3);

	local pButton3ex = CButton:create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton3ex:getLabel():setFontSize(30.0);
	pButton3ex:getLabel():setString("false");
	pButton3ex:setPosition(CCPoint(680, 300));
	pButton3ex:setVisible(false);
	p_base_scene.p_layout:addChild(pButton3ex);

	local pText3 = CLabel:create();
	pText3:setAnchorPoint(CCPoint(1, 0.5));
	pText3:setPosition(CCPoint(350, 300));
	pText3:setFontSize(35.0);
	pText3:setString("setVisible()");
	p_base_scene.p_layout:addChild(pText3);
	
	
	return p_base_scene.p_scene;
end



-- createCButton9SpriteTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButton9SpriteTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButton9SpriteTest");
	p_base_scene.setDescription("9PatchSprite by create");
	
	local pButton = CButton:createWith9Sprite(CCSize(196, 68),"sprite9_btn1.png", "sprite9_btn2.png");
	pButton:getLabel():setFontSize(30.0);
	pButton:getLabel():setString("one");
	pButton:setPosition(CCPoint(480, 370));
	p_base_scene.p_layout:addChild(pButton);

	local pButton2 = CButton:create();
	pButton2:setContentSize(CCSize(196, 68));
	pButton2:setScale9Enabled(true);
	pButton2:setNormalImage("sprite9_btn1.png");
	pButton2:setSelectedImage("sprite9_btn2.png");
	pButton2:getLabel():setFontSize(30.0);
	pButton2:getLabel():setString("two");
	pButton2:setPosition(CCPoint(480, 270));
	p_base_scene.p_layout:addChild(pButton2);
	


	return p_base_scene.p_scene;
end



local m_lData = {
	"a",
	"ab",
	"abc",
	"abcd",
	"abcdef",
	"abcdefgi",
	"hahahahaha\nhehehehehe",
	"hahahahaha\nhehehehehe\nkukukukukukukuku"
};
m_Size = table.getn(m_lData) + 1;
m_idx = 1

-- createCButtonChangeSizeTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCButtonChangeSizeTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CButton_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CButton_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CButton_test_scene();
	end);
	
	p_base_scene.setTitle("CButtonChangeSizeTest");
	p_base_scene.setDescription("click the button for change anothor one");
	

	local m_pButton = CButton:create();
	m_pButton:setScale9Enabled(true);
	m_pButton:setNormalImage("sprite9_btn1.png");
	m_pButton:setSelectedImage("sprite9_btn2.png");
	m_pButton:getLabel():setFontSize(30.0);
	m_pButton:getLabel():setString("none");
	m_pButton:updateCascadeLabelContentSize(CCSize(50, 30));
	m_pButton:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(m_pButton);
	
	local function on_click(p_sender)
		if m_idx == m_Size then
			return;
		end
		m_pButton:getLabel():setString(tostring(m_lData[m_idx]));
		m_pButton:updateCascadeLabelContentSize(CCSize(50, 30));
		m_idx = m_idx + 1;
	end

	local pBtn = CButton:createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pBtn:setPosition(CCPoint(250, 320));
	pBtn:getLabel():setFontSize(27);
	pBtn:getLabel():setString("click me");
	pBtn:setOnClickScriptHandler(on_click);
	p_base_scene.p_layout:addChild(pBtn);
	
	
	return p_base_scene.p_scene;
end




local _n_CButton_test_idx = 0;

local function get_CButton_test_scene()
	if _n_CButton_test_idx == 0 then
		return createCButtonBasicTest();
	elseif _n_CButton_test_idx == 1 then
		return createCButtonEventTest();
	elseif _n_CButton_test_idx == 2 then
		return createCButtonLongClickTest();
	elseif _n_CButton_test_idx == 3 then
		return createCButtonWithTextTest();
	elseif _n_CButton_test_idx == 4 then
		return createCButtonAttributeTest();
	elseif _n_CButton_test_idx == 5 then
		return createCButton9SpriteTest();
	elseif _n_CButton_test_idx == 6 then
		return createCButtonChangeSizeTest();
	else
		_n_CButton_test_idx = 0;
		return createCButtonBasicTest();
	end
	return nil;
end

function push_CButton_test_scene()
	_n_CButton_test_idx = 0;
	local p_scene = get_CButton_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CButton_test_scene = function()
	_n_CButton_test_idx = _n_CButton_test_idx + 1;
	local p_scene = get_CButton_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CButton_test_scene = function()
	_n_CButton_test_idx = _n_CButton_test_idx - 1;
	local p_scene = get_CButton_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CButton_test_scene = function()
	local p_scene = get_CButton_test_scene();
	_p_director:replaceScene(p_scene);
end




























