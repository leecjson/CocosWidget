require "base"

local func_next_CLabel_test_scene = nil;
local func_back_CLabel_test_scene = nil;
local func_ref_CLabel_test_scene = nil;

-- createCLabelBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCLabelBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CLabel_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CLabel_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CLabel_test_scene();
	end);
	
	p_base_scene.setTitle("CLabelBasicTest");
	p_base_scene.setDescription("CLabel extern CCLabelTTF (long click and click)");
	
	local pText1 = CLabel:create("Hello CCTK And cocoswidget", "", 30.0);
	pText1:setPosition(CCPoint(480, 450));
	p_base_scene.p_layout:addChild(pText1);
	
	local pText3 = CLabel:create("none", "", 30.0);
	pText3:setPosition(CCPoint(750, 380));
	p_base_scene.p_layout:addChild(pText3);

	local pText2 = CLabel:create("Click me test event", "", 30.0);
	pText2:setTouchEnabled(true);
	pText2:setOnLongClickScriptHandler(function(p_sender, p_touch)
		pText3:setString("LongClicked");
		return false;
	end);
	pText2:setOnClickScriptHandler(function(p_sender)
		pText3:setString("Clicked");
	end);
	pText2:setOnTouchBeganScriptHandler(function(p_sender, p_touch)
		pText2:stopActionByTag(1);
		local pScaleTo = CCScaleTo:create(0.1, 1.3);
		pScaleTo:setTag(1);
		pText2:runAction(pScaleTo);
		return eWidgetTouchTransient;
	end);
	
	local function on_touch_end(p_sender, p_touch, f_duration)
		pText2:stopActionByTag(1);
		local pScaleTo = CCScaleTo:create(0.1, 1.0);
		pScaleTo:setTag(1);
		pText2:runAction(pScaleTo);
		return true;
	end
	
	pText2:setOnTouchEndedScriptHandler(on_touch_end);
	pText2:setOnTouchCancelledScriptHandler(on_touch_end);
	pText2:setColor(ccc3(0, 255, 0));
	pText2:setPosition(CCPoint(480, 380));
	p_base_scene.p_layout:addChild(pText2);
	
	return p_base_scene.p_scene;
end


-- createCLabelAtlasTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCLabelAtlasTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CLabel_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CLabel_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CLabel_test_scene();
	end);
	
	p_base_scene.setTitle("CLabelBasicTest");
	p_base_scene.setDescription("CLabelAtlas extern CCLabelAtlas (test event)");
	
	local pText = CLabelAtlas:create(";12456", "num.png", 26, 34, 49);
	pText:setTouchEnabled(true);
	pText:setAnchorPoint(CCPoint(0.5, 0.5));
	pText:setPosition(CCPoint(480, 320));
	pText:setOnTouchBeganScriptHandler(function(p,t)
		pText:stopActionByTag(1);
		local pScaleTo = CCScaleTo:create(0.1, 1.3);
		pScaleTo:setTag(1);
		pText:runAction(pScaleTo);
		return eWidgetTouchTransient;
	end);
	
	local function on_touch_end(p,t,f)
		pText:stopActionByTag(1);
		local pScaleTo = CCScaleTo:create(0.1, 1.0);
		pScaleTo:setTag(1);
		pText:runAction(pScaleTo);
		return true;
	end
	
	pText:setOnTouchEndedScriptHandler(on_touch_end);
	pText:setOnTouchCancelledScriptHandler(on_touch_end);
	p_base_scene.p_layout:addChild(pText);

	return p_base_scene.p_scene;
end


-- createCLabelBMFontTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCLabelBMFontTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CLabel_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CLabel_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CLabel_test_scene();
	end);
	
	p_base_scene.setTitle("CLabelBMFontTest");
	p_base_scene.setDescription("CLabelBMFont extern CCLabelBMFont");
	
	local pText = CLabelBMFont:create("hello cocos2d-x and cocoswidget", "arial-unicode-26.fnt");
	pText:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pText);

	return p_base_scene.p_scene;
end




local _n_CLabel_test_idx = 0;

local function get_CLabel_test_scene()
	if _n_CLabel_test_idx == 0 then
		return createCLabelBasicTest();
	elseif _n_CLabel_test_idx == 1 then
		return createCLabelAtlasTest();
	elseif _n_CLabel_test_idx == 2 then
		return createCLabelBMFontTest();
	else
		_n_CLabel_test_idx = 0;
		return createCLabelBasicTest();
	end
	return nil;
end

function push_CLabel_test_scene()
	_n_CLabel_test_idx = 0;
	local p_scene = get_CLabel_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CLabel_test_scene = function()
	_n_CLabel_test_idx = _n_CLabel_test_idx + 1;
	local p_scene = get_CLabel_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CLabel_test_scene = function()
	_n_CLabel_test_idx = _n_CLabel_test_idx - 1;
	local p_scene = get_CLabel_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CLabel_test_scene = function()
	local p_scene = get_CLabel_test_scene();
	_p_director:replaceScene(p_scene);
end




























