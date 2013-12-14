require "base"

local func_next_CTableView_test_scene = nil;
local func_back_CTableView_test_scene = nil;
local func_ref_CTableView_test_scene = nil;

-- createCTableViewBasicTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCTableViewBasicTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CTableView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CTableView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CTableView_test_scene();
	end);
	
	p_base_scene.setTitle("CTableViewBasicTest");
	p_base_scene.setDescription("TableView basic test");
	
	local function data_source(p_convertview, idx)
		local p_cell = tolua.cast(p_convertview, "CTableViewCell");
		local p_btn = nil;
		
		if p_cell == nil then
			p_cell = CTableViewCell:new();
			p_cell:autorelease();

			p_btn = CButton:createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
			p_btn:setPosition(CCPoint(74.0 / 2, 70.0 / 2));
			p_btn:getLabel():setFontSize(25.0);
			p_btn:setTag(1);
			p_cell:addChild(p_btn);
		else
			p_btn = tolua.cast(p_cell:getChildByTag(1), "CButton");
		end
		
		p_btn:getLabel():setString(tostring(idx));
		p_btn:setUserTag(idx);
	
		return p_cell;
	end
	
	local pTable = CTableView:create(CCSize(74.0 * 5, 70.0));
	pTable:setSizeOfCell(CCSize(74.0, 70.0));
	pTable:setCountOfCell(50);
	pTable:setDataSourceAdapterScriptHandler(data_source)
	pTable:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pTable);
	pTable:reloadData();

	
	return p_base_scene.p_scene;
end


local tab_data = {
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H",
	"I",
	"J",
	"K",
	"L",
	"M",
	"N",
	"O",
	"P",
	"Q",
	"R",
	"S",
	"T",
	"U",
	"V",
	"W",
	"X",
	"Y",
	"Z"
}
-- createCTableViewBindingDataAndVertical
-- =====================================================
-- =====================================================
-- =====================================================
local function createCTableViewBindingDataAndVertical()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CTableView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CTableView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CTableView_test_scene();
	end);
	
	p_base_scene.setTitle("CTableViewBindingDataAndVertical");
	p_base_scene.setDescription("binding data with table");
	
	
	local pText = CLabel:create();
	pText:setAnchorPoint(CCPoint(0, 0.5));
	pText:setPosition(CCPoint(200, 320));
	pText:setFontSize(35.0);
	pText:setString("click button");
	p_base_scene.p_layout:addChild(pText);
	
	local function on_click(p_sender)
		local btn = tolua.cast(p_sender, "CButton");
		pText:setString(tab_data[btn:getUserTag()]);
	end
	
	local function data_source(p_convertview, idx)
		local p_cell = tolua.cast(p_convertview, "CTableViewCell");
		local p_btn = nil;
		
		if p_cell == nil then
			p_cell = CTableViewCell:new();
			p_cell:autorelease();

			p_btn = CButton:createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
			p_btn:setOnClickScriptHandler(on_click);
			p_btn:setPosition(CCPoint(150.0 / 2, 54.0 / 2));
			p_btn:getLabel():setFontSize(25.0);
			p_btn:setTag(1);
			p_cell:addChild(p_btn);
		else
			p_btn = tolua.cast(p_cell:getChildByTag(1), "CButton");
		end
		
		p_btn:getLabel():setString(tab_data[idx + 1]);
		p_btn:setUserTag(idx + 1);
	
		return p_cell;
	end
	
	local pTable = CTableView:create(CCSize(150.0, 54.0 * 5));
	pTable:setCountOfCell(table.getn(tab_data));
	pTable:setSizeOfCell(CCSize(150.0, 54.0));
	pTable:setDataSourceAdapterScriptHandler(data_source);
	pTable:setDirection(eScrollViewDirectionVertical);
	pTable:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pTable);
	pTable:reloadData();
	
	
	return p_base_scene.p_scene;
end	


-- createCTableViewReloadTest
-- =====================================================
-- =====================================================
-- =====================================================
local function createCTableViewReloadTest()
	local p_base_scene = createScene();
	--next
	p_base_scene.p_next_btn:setOnClickScriptHandler(function(p_sender)
		func_next_CTableView_test_scene();
	end);
	--back
	p_base_scene.p_back_btn:setOnClickScriptHandler(function(p_sender)
		func_back_CTableView_test_scene();
	end);
	--ref
	p_base_scene.p_ref_btn:setOnClickScriptHandler(function(p_sender)
		func_ref_CTableView_test_scene();
	end);
	
	p_base_scene.setTitle("CTableViewReloadTest");
	p_base_scene.setDescription("click button will pop a string into vector and reload\n table with auto relocate");
	
	
	
	local v_datas = {
		"First"
	};
	
	local idx = 1;
	local pTable;
	
	function on_click(p_sender)
		if idx >= table.getn(tab_data) + 1 then
			return;
		end
		
		v_datas[table.getn(v_datas) + 1] = tab_data[idx];
		idx = idx + 1;
		pTable:setCountOfCell(table.getn(v_datas));
		pTable:reloadData();
		pTable:setContentOffset(ccp(pTable:getMaxOffset().x, pTable:getMaxOffset().y));
	end
	
	local function data_source(p_convertview, idx)
		local p_cell = tolua.cast(p_convertview, "CTableViewCell");
		local p_btn = nil;
		
		if p_cell == nil then
			p_cell = CTableViewCell:new();
			p_cell:autorelease();

			p_btn = CButton:createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
			p_btn:setPosition(CCPoint(150.0 / 2, 54.0 / 2));
			p_btn:getLabel():setFontSize(25.0);
			p_btn:setTag(1);
			p_cell:addChild(p_btn);
		else
			p_btn = tolua.cast(p_cell:getChildByTag(1), "CButton");
		end
		
		p_btn:getLabel():setString(v_datas[idx + 1]);
		p_btn:setUserTag(idx + 1);
	
		return p_cell;
	end
	
	pTable = CTableView:create(CCSize(150.0, 54.0 * 5));
	pTable:setCountOfCell(table.getn(v_datas));
	pTable:setSizeOfCell(CCSize(150.0, 54.0));
	pTable:setDataSourceAdapterScriptHandler(data_source);
	pTable:setDirection(eScrollViewDirectionVertical);
	pTable:setAutoRelocate(true);
	pTable:setPosition(CCPoint(480, 320));
	p_base_scene.p_layout:addChild(pTable);
	pTable:reloadData();

	local pButton = CButton:createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton:setOnClickScriptHandler(on_click);
	pButton:setPosition(CCPoint(200, 320));
	pButton:getLabel():setFontSize(25.0);
	pButton:getLabel():setString("reloadData");
	p_base_scene.p_layout:addChild(pButton);
	
	
	return p_base_scene.p_scene;
end	



local _n_CTableView_test_idx = 0;

local function get_CTableView_test_scene()
	if _n_CTableView_test_idx == 0 then
		return createCTableViewBasicTest();
	elseif _n_CTableView_test_idx == 1 then
		return createCTableViewBindingDataAndVertical();
	elseif _n_CTableView_test_idx == 2 then
		return createCTableViewReloadTest();
	else
		_n_CTableView_test_idx = 0;
		return createCTableViewBasicTest();
	end
	return nil;
end

function push_CTableView_test_scene()
	_n_CTableView_test_idx = 0;
	local p_scene = get_CTableView_test_scene();
	_p_director:pushScene(p_scene);
end

func_next_CTableView_test_scene = function()
	_n_CTableView_test_idx = _n_CTableView_test_idx + 1;
	local p_scene = get_CTableView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_back_CTableView_test_scene = function()
	_n_CTableView_test_idx = _n_CTableView_test_idx - 1;
	local p_scene = get_CTableView_test_scene();
	_p_director:replaceScene(p_scene);
end

func_ref_CTableView_test_scene = function()
	local p_scene = get_CTableView_test_scene();
	_p_director:replaceScene(p_scene);
end




























