require "base"

local func_next_CTextRich_test_scene = nil;
local func_back_CTextRich_test_scene = nil;
local func_ref_CTextRich_test_scene = nil;

-- createCTextRichBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCTextRichBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CTextRich_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CTextRich_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CTextRich_test_scene();
	end);
	
	p_base_scene.setTitle("CTextRichBasicTest");
	p_base_scene.setDescription("a basic text rich widget with a single line");
	
	local pTextRich = CTextRich:create();
	pTextRich:insertElement("TEXT", "", 20);
	pTextRich:insertElement("Rich", "", 45);
	pTextRich:insertElement("And", "", 25, ccc3(255, 0, 0));
	pTextRich:insertElement("cocos2d-x", "", 70, ccc3(0, 0, 255));
	pTextRich:setPosition(ccp(960/2, 640/2));
	pTextRich:reloadData();

	local pColor = CColorView:create(ccc4(255, 0, 0, 50));
	pColor:setContentSize(pTextRich:getContentSize());
	pColor:setPosition(ccp(960/2, 640/2));

	p_base_scene.p_window:addChild(pColor);
	p_base_scene.p_window:addChild(pTextRich);

	
	return p_base_scene.p_scene;
end

-- createCTextRichEventTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCTextRichEventTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CTextRich_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CTextRich_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CTextRich_test_scene();
	end);
	
	p_base_scene.setTitle("CTextRichEventTest");
	p_base_scene.setDescription("mutil line and event test");
	
	local m_pLabel = nil;
	
	local function onClickTextRich(sender, description)
		if description ~= nil then
			m_pLabel:setString(description);
		else 
			m_pLabel:setString("click");
		end
	end
	
	local pTextRich = CTextRich:create();
	pTextRich:setMaxLineLength(20);
	pTextRich:setVerticalSpacing(15.0);
	pTextRich:insertElement("[System]:", "", 30);
	pTextRich:insertElement("cocos2d-x ", "", 30, ccc3(255, 0, 0));
	pTextRich:insertElement("is a good engine for mobile phone and ");
	pTextRich:insertElement("cocoswidget ", "", 30, ccc3(255, 0, 0));
	pTextRich:insertElement("is helpful for it ", "", 30, ccc3(255, 0, 0));
	pTextRich:insertElement("[ click me ] ", "", 30, ccc3(255,0,255), "Label");
	pTextRich:insertElement("my name is ", "", 30);
	pTextRich:insertElement("Jason lee - Lijunlin", "", 30, ccc3(255,255,0), "Jason lee - Lijunlin");

	local pIcon = CCSprite:create("icon.png");
	pIcon:runAction(CCRepeatForever:create(CCBlink:create(1.0, 5)));

	pTextRich:insertElement(pIcon, 4, "Image");
	pTextRich:insertElement("hehe ByeBye","", 30);
	pTextRich:setPosition(CCPoint(960/2, 640/2));
	pTextRich:reloadData();
	pTextRich:setOnTextRichClickScriptHandler(onClickTextRich);
	p_base_scene.p_window:addChild(pTextRich);

	m_pLabel = CLabel:create("None", "", 30);
	m_pLabel:setPosition(CCPoint(800, 320));
	p_base_scene.p_window:addChild(m_pLabel);
	
	return p_base_scene.p_scene;
end






local _n_CTextRich_test_idx = 0;

local function get_CTextRich_test_scene()
	if _n_CTextRich_test_idx == 0 then
		return createCTextRichBasicTest();
	elseif _n_CTextRich_test_idx == 1 then
		return createCTextRichEventTest();
	else
		_n_CTextRich_test_idx = 0;
		return createCTextRichBasicTest();
	end
	return nil;
end

function push_CTextRich_test_scene()
	_n_CTextRich_test_idx = 0;
	local p_scene = get_CTextRich_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CTextRich_test_scene = function()
	_n_CTextRich_test_idx = _n_CTextRich_test_idx + 1;
	local p_scene = get_CTextRich_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CTextRich_test_scene = function()
	_n_CTextRich_test_idx = _n_CTextRich_test_idx - 1;
	local p_scene = get_CTextRich_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CTextRich_test_scene = function()
	local p_scene = get_CTextRich_test_scene();
	_p_director:replaceScene(p_scene);
end




























