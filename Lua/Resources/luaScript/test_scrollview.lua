require "base"

local func_next_CScrollView_test_scene = nil;
local func_back_CScrollView_test_scene = nil;
local func_ref_CScrollView_test_scene = nil;

-- createCScrollViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	
	p_base_scene.setTitle("CScrollViewBasicTest");
	p_base_scene.setDescription("ScrollView basic test");
	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pBg);

	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setPosition(CCPoint(480, 320));
	pScroll:setDirection(eScrollViewDirectionBoth);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(CCPoint(0,0));
	pSprite:setPosition(CCPoint(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);
	
	return p_base_scene.p_scene;
end



-- createCScrollViewEventTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewEventTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	p_base_scene.setTitle("CScrollViewEventTest");
	p_base_scene.setDescription("test event");
	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(680, 320));
	p_base_scene.p_window:addChild(pBg);
	
	local m_pText1 = CLabel:create();
	m_pText1:setAnchorPoint(CCPoint(0, 0.5));
	m_pText1:setPosition(CCPoint(35, 460));
	m_pText1:setFontSize(35.0);
	m_pText1:setString("contentOffset:");
	p_base_scene.p_window:addChild(m_pText1);

	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setOnScrollingScriptHandler(function(p_sender)
		local str = string.format("contentOffset:[%d][%d]", pScroll:getContentOffset().x, pScroll:getContentOffset().y);
		m_pText1:setString(str);
	end);
	pScroll:setPosition(CCPoint(680, 320));
	pScroll:setDirection(eScrollViewDirectionBoth);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(ccp(0,0));
	pSprite:setPosition(ccp(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);

	

	return p_base_scene.p_scene;
end


-- createCScrollViewHorizontalTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewHorizontalTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	p_base_scene.setTitle("CScrollViewHorizontalTest");
	p_base_scene.setDescription("test event");
	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pBg);

	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setPosition(CCPoint(480, 320));
	pScroll:setDirection(eScrollViewDirectionHorizontal);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(ccp(0,0));
	pSprite:setPosition(ccp(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);
	
	for i = 0, 9, 1 do
		local pIcon = CCSprite:create("icon.png");
		pIcon:setAnchorPoint(ccp(0,0));
		pIcon:setPosition(CCPoint(i * 100, 0));
		pScroll:getContainer():addChild(pIcon);
	end

	for i = 0, 4, 1 do
		local pButton = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton:setAnchorPoint(ccp(0,0));
		pButton:setPosition(CCPoint(i * 200, 200));
		pScroll:getContainer():addChild(pButton);
	end
	

	return p_base_scene.p_scene;
end


-- createCScrollViewVerticalTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewVerticalTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	p_base_scene.setTitle("CScrollViewVerticalTest");
	p_base_scene.setDescription("direction by vertical\n add some toggle button in the same group");
	
	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(480, 320));
	p_base_scene.p_window:addChild(pBg);

	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setPosition(CCPoint(480, 320));
	pScroll:setDirection(eScrollViewDirectionVertical);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(ccp(0,0));
	pSprite:setPosition(ccp(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);

	for i = 0, 4, 1 do
		local pToggleButton = CToggleView:create("toggle1_1.png", "toggle1_2.png");
		pToggleButton:setAnchorPoint(ccp(0,0));
		pToggleButton:setPosition(CCPoint(130, i * 130));
		pToggleButton:setExclusion(1);
		pScroll:getContainer():addChild(pToggleButton);
	end

	return p_base_scene.p_scene;
end


-- createCScrollViewAttributeTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewAttributeTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	p_base_scene.setTitle("CScrollViewAttributeTest");
	p_base_scene.setDescription("test attribute of scroll");
	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(680, 320));
	p_base_scene.p_window:addChild(pBg);

	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setPosition(CCPoint(680, 320));
	pScroll:setDirection(eScrollViewDirectionVertical);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(ccp(0,0));
	pSprite:setPosition(ccp(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);

	for i = 0, 4, 1 do
		local pToggleButton = CToggleView:create("toggle1_1.png", "toggle1_2.png");
		pToggleButton:setAnchorPoint(ccp(0,0));
		pToggleButton:setPosition(CCPoint(130, i * 130));
		pToggleButton:setExclusion(1);
		pScroll:getContainer():addChild(pToggleButton);
	end
	
	
	local function on_click(p_sender)
		local p_toggle = tolua.cast(p_sender, "CToggleView");
		local p_text = p_toggle:getUserObject();
		
		if p_toggle:isChecked() == true then
			p_text:setString("true");
		else
			p_text:setString("false");
		end
		
		if p_toggle:getUserTag() == 1 then
			pScroll:setDeaccelerateable(p_toggle:isChecked());
		elseif p_toggle:getUserTag() == 2 then
			pScroll:setBounceable(p_toggle:isChecked());
		elseif p_toggle:getUserTag() == 3 then
			pScroll:setDragable(p_toggle:isChecked());
		elseif p_toggle:getUserTag() == 4 then
			pScroll:setTouchEnabled(p_toggle:isChecked());
		end
		
	end

	local pToggle1 = CToggleView:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle1:getLabel():setFontSize(28);
	pToggle1:getLabel():setString("setDeaccelerateable");
	pToggle1:setPosition(150, 480);
	pToggle1:setChecked(true);
	pToggle1:setOnClickScriptHandler(on_click);
	pToggle1:setUserTag(1);
	p_base_scene.p_window:addChild(pToggle1);

	local pText1 = CLabel:create();
	pText1:setAnchorPoint(CCPoint(0, 0.5));
	pText1:setPosition(CCPoint(300, 480));
	pText1:setFontSize(35.0);
	pText1:setString("true");
	p_base_scene.p_window:addChild(pText1);
	pToggle1:setUserObject(pText1);

	local pToggle2 = CToggleView:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle2:getLabel():setFontSize(28);
	pToggle2:getLabel():setString("setBounceable");
	pToggle2:setPosition(150, 400);
	pToggle2:setChecked(true);
	pToggle2:setOnClickScriptHandler(on_click);
	pToggle2:setUserTag(2);
	p_base_scene.p_window:addChild(pToggle2);

	local pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(0, 0.5));
	pText2:setPosition(CCPoint(300, 400));
	pText2:setFontSize(35.0);
	pText2:setString("true");
	p_base_scene.p_window:addChild(pText2);
	pToggle2:setUserObject(pText2);


	local pToggle3 = CToggleView:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle3:getLabel():setFontSize(28);
	pToggle3:getLabel():setString("setDragable");
	pToggle3:setPosition(150, 320);
	pToggle3:setChecked(true);
	pToggle3:setOnClickScriptHandler(on_click);
	pToggle3:setUserTag(3);
	p_base_scene.p_window:addChild(pToggle3);

	local pText3 = CLabel:create();
	pText3:setAnchorPoint(CCPoint(0, 0.5));
	pText3:setPosition(CCPoint(300, 320));
	pText3:setFontSize(35.0);
	pText3:setString("true");
	p_base_scene.p_window:addChild(pText3);
	pToggle3:setUserObject(pText3);

	local pToggle4 = CToggleView:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle4:getLabel():setFontSize(28);
	pToggle4:getLabel():setString("setTouchEnabled");
	pToggle4:setPosition(150, 240);
	pToggle4:setChecked(true);
	pToggle4:setOnClickScriptHandler(on_click);
	pToggle4:setUserTag(4);
	p_base_scene.p_window:addChild(pToggle4);

	local pText4 = CLabel:create();
	pText4:setAnchorPoint(CCPoint(0, 0.5));
	pText4:setPosition(CCPoint(300, 240));
	pText4:setFontSize(35.0);
	pText4:setString("true");
	p_base_scene.p_window:addChild(pText4);
	pToggle4:setUserObject(pText4);

	return p_base_scene.p_scene;
end


-- createCScrollViewAnimationTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewAnimationTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	p_base_scene.setTitle("CScrollViewAnimationTest");
	p_base_scene.setDescription("test animation");
	
	
	local pBg = CCSprite:create("background.png");
	pBg:setPosition(CCPoint(680, 320));
	p_base_scene.p_window:addChild(pBg);

	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setPosition(CCPoint(680, 320));
	pScroll:setDirection(eScrollViewDirectionHorizontal);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(ccp(0,0));
	pSprite:setPosition(ccp(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);

	for i = 0, 9, 1 do
		local pIcon = CCSprite:create("icon.png");
		pIcon:setAnchorPoint(ccp(0,0));
		pIcon:setPosition(CCPoint(i * 100, 100));
		pScroll:getContainer():addChild(pIcon);
	end
	
	local function on_click(p_sender)
		local btn = tolua.cast(p_sender, "CButton");
		if btn:getUserTag() == 1 then
			pScroll:setContentOffsetInDuration(ccp(pScroll:getMinOffset().x, pScroll:getMinOffset().y), 1.0);
		elseif btn:getUserTag() == 2 then
			pScroll:setContentOffsetEaseIn(ccp(pScroll:getMaxOffset().x, pScroll:getMaxOffset().y), 1.0, 0.2);
		elseif btn:getUserTag() == 3 then
			pScroll:setContentOffset(ccp(pScroll:getMinOffset().x, pScroll:getMinOffset().y));
		end
	end

	local pButton1 = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton1:getLabel():setFontSize(28);
	pButton1:getLabel():setString("scrollToRight");
	pButton1:setPosition(120, 480);
	pButton1:setOnClickScriptHandler(on_click);
	pButton1:setUserTag(1);
	p_base_scene.p_window:addChild(pButton1);

	local pText1 = CLabel:create();
	pText1:setAnchorPoint(CCPoint(0, 0.5));
	pText1:setPosition(CCPoint(240, 480));
	pText1:setFontSize(35.0);
	pText1:setString("setContentOffsetInDuration");
	p_base_scene.p_window:addChild(pText1);


	local pButton2 = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton2:getLabel():setFontSize(28);
	pButton2:getLabel():setString("scrollToLeft");
	pButton2:setPosition(120, 400);
	pButton2:setOnClickScriptHandler(on_click);
	pButton2:setUserTag(2);
	p_base_scene.p_window:addChild(pButton2);

	local pText2 = CLabel:create();
	pText2:setAnchorPoint(CCPoint(0, 0.5));
	pText2:setPosition(CCPoint(240, 400));
	pText2:setFontSize(35.0);
	pText2:setString("setContentOffsetEaseIn");
	p_base_scene.p_window:addChild(pText2);

	local pButton3 = CButton:createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton3:getLabel():setFontSize(28);
	pButton3:getLabel():setString("scrollToRight");
	pButton3:setPosition(120, 320);
	pButton3:setOnClickScriptHandler(on_click);
	pButton3:setUserTag(3);
	p_base_scene.p_window:addChild(pButton3);

	local pText3 = CLabel:create();
	pText3:setAnchorPoint(CCPoint(0, 0.5));
	pText3:setPosition(CCPoint(240, 320));
	pText3:setFontSize(35.0);
	pText3:setString("setContentOffset");
	p_base_scene.p_window:addChild(pText3);
	
	
	return p_base_scene.p_scene;
end	


-- createCScrollViewInsideScrollTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCScrollViewInsideScrollTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CScrollView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CScrollView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CScrollView_test_scene();
	end);
	p_base_scene.setTitle("CScrollViewInsideScrollTest");
	p_base_scene.setDescription("Scroll view inside the other one");
	
	
	local pScroll = CScrollView:create(CCSize(480, 320));
	pScroll:setBackgroundImage("background.png");
	pScroll:setPosition(CCPoint(480, 320));
	pScroll:setDirection(eScrollViewDirectionBoth);
	p_base_scene.p_window:addChild(pScroll);

	local pSprite = CCSprite:create("scrollcontent.png");
	pSprite:setAnchorPoint(ccp(0,0));
	pSprite:setPosition(ccp(0,0));
	pScroll:setContainerSize(pSprite:getContentSize());
	pScroll:getContainer():addChild(pSprite);

	local pScroll2 = CScrollView:create(CCSize(272, 76));
	pScroll2:setDirection(eScrollViewDirectionHorizontal);
	pScroll2:setBackgroundImage("background3.png");
	pScroll2:setPosition(CCPoint(480 /2, 320 / 2));
	pScroll:getContainer():addChild(pScroll2);

	pScroll2:setContainerSize(CCSize(62 * 20, 76));
	for i = 0, 19, 1 do
		local pSp = CCSprite:create("icon.png");
		pSp:setAnchorPoint(ccp(0,0));
		pSp:setPosition(CCPoint(i * 62, 0));
		pScroll2:getContainer():addChild(pSp);
	end

	return p_base_scene.p_scene;
end	

	
	

local _n_CScrollView_test_idx = 0;

local function get_CScrollView_test_scene()
	if _n_CScrollView_test_idx == 0 then
		return createCScrollViewBasicTest();
	elseif _n_CScrollView_test_idx == 1 then
		return createCScrollViewEventTest();
	elseif _n_CScrollView_test_idx == 2 then
		return createCScrollViewHorizontalTest();
	elseif _n_CScrollView_test_idx == 3 then
		return createCScrollViewVerticalTest();
	elseif _n_CScrollView_test_idx == 4 then
		return createCScrollViewAttributeTest();
	elseif _n_CScrollView_test_idx == 5 then
		return createCScrollViewAnimationTest();
	elseif _n_CScrollView_test_idx == 6 then
		return createCScrollViewInsideScrollTest();
	else
		_n_CScrollView_test_idx = 0;
		return createCScrollViewBasicTest();
	end
	return nil;
end

function push_CScrollView_test_scene()
	_n_CScrollView_test_idx = 0;
	local p_scene = get_CScrollView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CScrollView_test_scene = function()
	_n_CScrollView_test_idx = _n_CScrollView_test_idx + 1;
	local p_scene = get_CScrollView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CScrollView_test_scene = function()
	_n_CScrollView_test_idx = _n_CScrollView_test_idx - 1;
	local p_scene = get_CScrollView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CScrollView_test_scene = function()
	local p_scene = get_CScrollView_test_scene();
	_p_director:replaceScene(p_scene);
end




























