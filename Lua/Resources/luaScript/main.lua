require "base"
require "test_button"
require "test_toggleview"
require "test_label"
require "test_scrollview"
require "test_tableview"
require "test_gridpageview"
require "test_gridview"
require "test_panel"
require "test_pageview"
require "test_listview"
require "test_checkbox"
require "test_controlview"
require "test_progressbar"
require "test_slider"

local _tab_menu_items = {
	"Button Test",
	"ToggleView Test",
	"Label Test",
	"ScrollView Test",
	"TableView Test",
	"PageGridView Test",
	"GridView Test",
	"Panel Test",
	"PageView Test",
	"ListView Test",
	"CheckBox Test",
	"ControlView Test",
	"ProgressBar Test",
	"Slider Test"
}

function main()

	local p_scene = CCScene:create();
	_p_director:runWithScene(p_scene);
	
	local p_layout = CWidgetLayout:create();
	p_layout:setMultiTouchEnabled(false);
	p_scene:addChild(p_layout);
	
	local function on_table_view_item_clicked(p_sender)
		local target = tolua.cast(p_sender, "CLabel");
		local idx = target:getUserTag() + 1;
		
		if idx == 1 then
			push_CButton_test_scene();
		elseif idx == 2 then
			push_CToggleView_test_scene();
		elseif idx == 3 then
			push_CLabel_test_scene();
		elseif idx == 4 then
			push_CScrollView_test_scene();
		elseif idx == 5 then
			push_CTableView_test_scene();
		elseif idx == 6 then
			push_CGridPageView_test_scene();
		elseif idx == 7 then
			push_CGridView_test_scene();
		elseif idx == 8 then
			push_CPanel_test_scene();
		elseif idx == 9 then
			push_CPageView_test_scene();
		elseif idx == 10 then
			push_CListView_test_scene();
		elseif idx == 11 then 
			push_CCheckBox_test_scene();
		elseif idx == 12 then
			push_CControlViewView_test_scene();
		elseif idx == 13 then
			push_CProgressBar_test_scene();
		elseif idx == 14 then
			push_CSlider_test_scene();
		end
	end
	
	local function on_table_view_item_touchbegan(p_sender, p_touch)
		local target = tolua.cast(p_sender, "CLabel");
		target:stopActionByTag(1);
		local p_scale_to = CCScaleTo:create(0.1, 1.3);
		p_scale_to:setTag(1);
		target:runAction(p_scale_to);
		return eWidgetTouchTransient;
	end
	
	local function on_table_view_item_touchended(p_sender, p_touch, f_duration)
		local target = tolua.cast(p_sender, "CLabel");
		target:stopActionByTag(1);
		local p_scale_to = CCScaleTo:create(0.1, 1.0);
		p_scale_to:setTag(1);
		target:runAction(p_scale_to);
		return true;
	end
	
	local function table_view_data_source(p_obj, idx)
		local p_cell = tolua.cast(p_obj, "CTableViewCell");
		local p_text = nil;
		
		if p_cell == nil 
		then
			p_cell = CTableViewCell:new();
			p_cell:autorelease();
			
			p_text = CLabel:create();
			p_text:setFontSize(40);
			p_text:setPosition(CCPoint(350, 50));
			p_text:setTouchEnabled(true);
			p_text:setOnTouchBeganScriptHandler(on_table_view_item_touchbegan);
			p_text:setOnTouchEndedScriptHandler(on_table_view_item_touchended);
			p_text:setOnTouchCancelledScriptHandler(on_table_view_item_touchended);
			p_text:setOnClickScriptHandler(on_table_view_item_clicked);
			p_text:setTag(1);
			p_cell:addChild(p_text);
		else
			p_text = tolua.cast(p_cell:getChildByTag(1), "CLabel");
		end
		
		p_text:setUserTag(idx);
		p_text:setString(tostring(_tab_menu_items[idx + 1]));
		
		return p_cell;
	end
	
	local p_table_view = CTableView:create(CCSizeMake(700, 640));
	p_table_view:setDataSourceAdapterScriptHandler(table_view_data_source);
	p_table_view:setCountOfCell(table.getn(_tab_menu_items));
	p_table_view:setSizeOfCell(CCSizeMake(700, 100));
	p_table_view:setBounceable(true);
	p_table_view:setDirection(eScrollViewDirectionVertical);
	p_table_view:setPosition(CCPoint(480, 320));
	p_layout:addChild(p_table_view);
	p_table_view:reloadData();
	

end