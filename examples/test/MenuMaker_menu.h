
#ifndef MENUMAKER_MENU_H
#define MENUMAKER_MENU_H

#include "MenuMaker.h"

#define MENUMAKER_ID_entry_4 16383
#define MENUMAKER_ID_lists 16384
#define MENUMAKER_ID_action_4 16385
#define MENUMAKER_ID_actions 16386
#define MENUMAKER_ID_entry_5 16387
#define MENUMAKER_ID_action_2 16388
#define MENUMAKER_ID_entry_3 16389
#define MENUMAKER_ID_edits 16390
#define MENUMAKER_ID_action_3 16391
#define MENUMAKER_ID_entry_2 16392
#define MENUMAKER_ID_subs 16393
#define MENUMAKER_ID_entry_1 16394
#define MENUMAKER_ID_main 16395
#define MENUMAKER_ID_single 16396
#define MENUMAKER_ID_edit_1 16397
#define MENUMAKER_ID_entry_6 16398
#define MENUMAKER_ID_multi 16399
#define MENUMAKER_ID_action_1 16400
const char *MENUMAKER_ID_STRING_0 = "Single select";
const char *MENUMAKER_ID_STRING_1 = "Entry 4";
const char *MENUMAKER_ID_STRING_2 = "Entry 2";
const char *MENUMAKER_ID_STRING_3 = "Entry 6";
const char *MENUMAKER_ID_STRING_4 = "Entry 5";
const char *MENUMAKER_ID_STRING_5 = "Entry 1";
const char *MENUMAKER_ID_STRING_6 = "Entry 3";
const char *MENUMAKER_ID_STRING_7 = "Actions";
const char *MENUMAKER_ID_STRING_8 = "Action 4";
const char *MENUMAKER_ID_STRING_9 = "Action 2";
const char *MENUMAKER_ID_STRING_10 = "Action 3";
const char *MENUMAKER_ID_STRING_11 = "Action 1";
const char *MENUMAKER_ID_STRING_12 = "Lists";
const char *MENUMAKER_ID_STRING_13 = "Multiple select";
const char *MENUMAKER_ID_STRING_14 = "Submenus";
const char *MENUMAKER_ID_STRING_15 = "Same again 3";
const char *MENUMAKER_ID_STRING_16 = "Edit Inputs";
const char *MENUMAKER_ID_STRING_17 = "Integer";
const char *MENUMAKER_ID_STRING_18 = "Example";
void MenuMakerImpl::begin() {
	createMenus(7);
	createMenu(MENUMAKER_ID_single, MENUMAKER_ID_STRING_0, MENUMAKER_TYPE_SELECT_SINGLE, 6)
		->addEntry(MENUMAKER_ID_entry_1, MENUMAKER_ID_STRING_5,MENUMAKER_TYPE_SELECT_SINGLE)
		->addEntry(MENUMAKER_ID_entry_2, MENUMAKER_ID_STRING_2,MENUMAKER_TYPE_SELECT_SINGLE)
		->addEntry(MENUMAKER_ID_entry_3, MENUMAKER_ID_STRING_6,MENUMAKER_TYPE_SELECT_SINGLE)
		->addEntry(MENUMAKER_ID_entry_4, MENUMAKER_ID_STRING_1,MENUMAKER_TYPE_SELECT_SINGLE)
		->addEntry(MENUMAKER_ID_entry_5, MENUMAKER_ID_STRING_4,MENUMAKER_TYPE_SELECT_SINGLE)
		->addEntry(MENUMAKER_ID_entry_6, MENUMAKER_ID_STRING_3,MENUMAKER_TYPE_SELECT_SINGLE);

	createMenu(MENUMAKER_ID_actions, MENUMAKER_ID_STRING_7, MENUMAKER_TYPE_DEFAULT, 4)
		->addEntry(MENUMAKER_ID_action_1, MENUMAKER_ID_STRING_11,MENUMAKER_TYPE_DEFAULT)
		->addEntry(MENUMAKER_ID_action_2, MENUMAKER_ID_STRING_9,MENUMAKER_TYPE_DEFAULT)
		->addEntry(MENUMAKER_ID_action_3, MENUMAKER_ID_STRING_10,MENUMAKER_TYPE_DEFAULT)
		->addEntry(MENUMAKER_ID_action_4, MENUMAKER_ID_STRING_8,MENUMAKER_TYPE_DEFAULT);

	createMenu(MENUMAKER_ID_lists, MENUMAKER_ID_STRING_12, MENUMAKER_TYPE_DEFAULT, 3)
		->addEntry(MENUMAKER_ID_actions, MENUMAKER_ID_STRING_7,MENUMAKER_TYPE_SUBMENU)
		->addEntry(MENUMAKER_ID_single, MENUMAKER_ID_STRING_0,MENUMAKER_TYPE_SUBMENU)
		->addEntry(MENUMAKER_ID_multi, MENUMAKER_ID_STRING_13,MENUMAKER_TYPE_SUBMENU);

	createMenu(MENUMAKER_ID_subs, MENUMAKER_ID_STRING_14, MENUMAKER_TYPE_DEFAULT, 1)
		->addEntry(MENUMAKER_ID_subs, MENUMAKER_ID_STRING_15,MENUMAKER_TYPE_SUBMENU);

	createMenu(MENUMAKER_ID_multi, MENUMAKER_ID_STRING_13, MENUMAKER_TYPE_SELECT_MULTI, 6)
		->addEntry(MENUMAKER_ID_entry_1, MENUMAKER_ID_STRING_5,MENUMAKER_TYPE_SELECT_MULTI)
		->addEntry(MENUMAKER_ID_entry_2, MENUMAKER_ID_STRING_2,MENUMAKER_TYPE_SELECT_MULTI)
		->addEntry(MENUMAKER_ID_entry_3, MENUMAKER_ID_STRING_6,MENUMAKER_TYPE_SELECT_MULTI)
		->addEntry(MENUMAKER_ID_entry_4, MENUMAKER_ID_STRING_1,MENUMAKER_TYPE_SELECT_MULTI)
		->addEntry(MENUMAKER_ID_entry_5, MENUMAKER_ID_STRING_4,MENUMAKER_TYPE_SELECT_MULTI)
		->addEntry(MENUMAKER_ID_entry_6, MENUMAKER_ID_STRING_3,MENUMAKER_TYPE_SELECT_MULTI);

	createMenu(MENUMAKER_ID_edits, MENUMAKER_ID_STRING_16, MENUMAKER_TYPE_DEFAULT, 1)
		->addEntry(MENUMAKER_ID_edit_1, MENUMAKER_ID_STRING_17,MENUMAKER_TYPE_DEFAULT);

	createMenu(MENUMAKER_ID_main, MENUMAKER_ID_STRING_18, MENUMAKER_TYPE_DEFAULT, 3)
		->addEntry(MENUMAKER_ID_subs, MENUMAKER_ID_STRING_14,MENUMAKER_TYPE_SUBMENU)
		->addEntry(MENUMAKER_ID_lists, MENUMAKER_ID_STRING_12,MENUMAKER_TYPE_SUBMENU)
		->addEntry(MENUMAKER_ID_edits, MENUMAKER_ID_STRING_16,MENUMAKER_TYPE_SUBMENU);

}

#endif // MENUMAKER_MENU_H
