_p_director = CCDirector:sharedDirector();

function createScene()
	
	local tab_scene = {};
	tab_scene.p_scene = nil;
	tab_scene.p_layout = nil;
	tab_scene.p_next_btn = nil;
	tab_scene.p_back_btn = nil;
	tab_scene.p_ref_btn = nil;
	tab_scene.p_title_text = nil;
	tab_scene.p_description_text = nil;
	
	tab_scene.setTitle = function(str)
		if tab_scene.p_title_text ~= nil then
			tab_scene.p_title_text:setString(str);
		end
	end
	
	tab_scene.setDescription = function(str)
		if tab_scene.p_description_text ~= nil then
			tab_scene.p_description_text:setString(str);
		end
	end

	local p_scene = CCScene:create();
	tab_scene.p_scene = p_scene;
	
	local p_layout = CWidgetLayout:create();
	p_layout:setTag(1);
	p_scene:addChild(p_layout);
	tab_scene.p_layout = p_layout;

	--next btn
	local p_next_btn = CButton:create("next1.png", "next2.png");
	p_next_btn:setPosition(ccp(630, 55));
	p_layout:addChild(p_next_btn);
	tab_scene.p_next_btn = p_next_btn;
	
	--back btn
	local p_back_btn = CButton:create("back1.png", "back2.png");
	p_back_btn:setPosition(ccp(330, 55));
	p_layout:addChild(p_back_btn);
	tab_scene.p_back_btn = p_back_btn;
	
	--ref btn
	local p_ref_btn = CButton:create("again1.png", "again2.png");
	p_ref_btn:setPosition(ccp(480, 55));
	p_layout:addChild(p_ref_btn);
	tab_scene.p_ref_btn = p_ref_btn;

	--title
	local p_title_text = CLabel:create();
	p_title_text:setFontSize(45);
	p_title_text:setPosition(ccp(480, 600));
	p_title_text:setTag(1);
	p_layout:addChild(p_title_text);
	tab_scene.p_title_text = p_title_text;
	
	-- description
	local p_description_text = CLabel:create();
	p_description_text:setHorizontalAlignment(kCCTextAlignmentCenter);
	p_description_text:setAnchorPoint(ccp(0.5, 1.0));
	p_description_text:setFontSize(30);
	p_description_text:setPosition(ccp(480, 570));
	p_description_text:setTag(2);
	p_layout:addChild(p_description_text);
	tab_scene.p_description_text = p_description_text;
	
	local function on_click_exit(p_sender)
		_p_director:popScene();
	end
	
	local function on_menu_text_touchbegan(p_sender, p_touch)
		
		p_sender:stopActionByTag(1);
		local p_scale_to = CCScaleTo:create(0.1, 1.3);
		p_scale_to:setTag(1);
		p_sender:runAction(p_scale_to);
		
		-- eWidgetTouchNone
		-- eWidgetTouchSustained
		return eWidgetTouchTransient;
	end
	
	local function on_menu_text_touchended(p_sender, p_touch, f_duration)
	
		p_sender:stopActionByTag(1);
		local p_scale_to = CCScaleTo:create(0.1, 1.0);
		p_scale_to:setTag(1);
		p_sender:runAction(p_scale_to);
		
		return true;
	end
	
	-- exit
	local p_menu_text = CLabel:create("Back", "", 45);
	p_menu_text:setTouchEnabled(true);
	p_menu_text:setOnTouchCancelledScriptHandler(on_menu_text_touchended);
	p_menu_text:setOnTouchEndedScriptHandler(on_menu_text_touchended);
	p_menu_text:setOnTouchBeganScriptHandler(on_menu_text_touchbegan);
	p_menu_text:setOnClickScriptHandler(on_click_exit);
	p_menu_text:setPosition(ccp(893, 35));
	p_layout:addChild(p_menu_text);
	tab_scene.p_menu_text = p_menu_text;
	
	return tab_scene;
end