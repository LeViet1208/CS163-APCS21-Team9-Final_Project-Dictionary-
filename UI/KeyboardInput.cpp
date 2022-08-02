#include "KeyboardInput.h"

void HandleKeyInput(KEY_EVENT_RECORD key) {
	if (key.bKeyDown) {
		switch (key.wVirtualKeyCode) {
		case VK_UP: {
			switch (page) {
			case MAIN_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				MainMenu(vitri);
				break;
			}

			case FUNCTION_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				FunctionMenu(vitri);
				break;
			}

			case SEARCH_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				SearchMenu(vitri);
				break;
			}

			case VIEW_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				ViewMenu(vitri);
				break;
			}

			case EDIT_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				EditMenu(vitri);
				break;
			}

			case GAME_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				GameMenu(vitri);
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
				else vitri = 0;
				break;
			}
			}
			break;
		}

		case VK_DOWN: {
			switch (page) {
			case MAIN_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				MainMenu(vitri);
				break;
			}

			case FUNCTION_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				FunctionMenu(vitri);
				break;
			}

			case SEARCH_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				SearchMenu(vitri);
				break;
			}

			case VIEW_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				ViewMenu(vitri);
				break;
			}

			case EDIT_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				EditMenu(vitri);
				break;
			}

			case GAME_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				GameMenu(vitri);
				break;
			}

			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 0) vitri = 1;
				break;
			}

			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 0) vitri = 1;
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
				else vitri = 0;
				break;
			}
			}
			break;
		}

		case VK_RETURN: {
			switch (page) {
			case MAIN_MENU: {
				if (vitri == 0) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 1) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = FUNCTION_MENU;
					vitri = 0;
					CurrentDict = EngToEngDict;
					Clrscr();
				}
				else if (vitri == 3) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 4) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					OutputToHistoryList();
					Clrscr();
					exit(0);
				}
				break;
			}

			case FUNCTION_MENU: {
				if (vitri == 0) {
					page = SEARCH_MENU;
					Clrscr();
				}
				else if (vitri == 1) {
					page = VIEW_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = EDIT_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 3) {
					// ham reset origin
					Clrscr();
				}
				else if (vitri == 4) {
					page = GAME_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					page = MAIN_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case 3: {
				if (vitri == 0) {
					page = SEARCH_FOR_KEYWORD_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 1) {
					// ham SEARCH FOR DEFINITION
					Clrscr();
				}
				else if (vitri == 2) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case 4: {
				if (vitri == 0) {
					page = HISTORY_OF_SEARCHING_MENU;
					Clrscr();
				}
				else if (vitri == 1) {
					page = VIEW_RANDOM_WORD_MENU;
					Clrscr();
				}
				else if (vitri == 2) {
					// ham VIEW FAVOURITE LIST
					Clrscr();
				}
				else if (vitri == 3) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case EDIT_MENU: {
				if (vitri == 0) {
					// ham ADD NEW WORD AND ITS DEFINITION
					Clrscr();
				}
				else if (vitri == 1) {
					// ham EDIT DEFINITION OF EXISTING WORD
					Clrscr();
				}
				else if (vitri == 2) {
					// ham REMOVE A WORD FROM DICTIONARY
					Clrscr();
				}
				else if (vitri == 3) {
					// ham ADD A WORD TO FAVOURITE LIST
					Clrscr();
				}
				else if (vitri == 4) {
					// ham REMOVE A WORD OF FAVOURITE LIST
					Clrscr();
				}
				else if (vitri == 5) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case GAME_MENU: {
				if (vitri == 0) {
					page = GUESS_DEFINITION_FROM_WORD_MENU;
					Clrscr();
				}
				else if (vitri == 1) {
					// GUESS WORD FROM DEFINITIONS
					Clrscr();
				}
				else if (vitri == 2) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case VIEW_RANDOM_WORD_MENU: {
				page = VIEW_MENU;
				vitri = 0;
				RandomIndex = -1;
				Clrscr();
				break;
			}

			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 2) {
					page = SEARCH_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 1) {
					page = SEARCH_FOR_KEYWORD_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = SEARCH_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (vitri == 0) {
					page = GUESS_DEFINITION_FROM_WORD_MENU;
					vitri = 0;
				}
				else if (vitri == 1) {
					page = GUESS_DEFINITION_FROM_WORD_MENU;
					vitri = 0;
				}
				else if (vitri == 2) {
					page = GUESS_DEFINITION_FROM_WORD_MENU;
					vitri = 0;
				}
				else if (vitri == 3) {
					page = GUESS_DEFINITION_FROM_WORD_MENU;
					vitri = 0;
				}
				if (vitri == 4) {
					page = GAME_MENU;
					vitri = 0;
					RandomIndex = -1;
					Clrscr();
				}
				break;
			}

			case HISTORY_OF_SEARCHING_MENU: {
				page = VIEW_MENU;
				vitri = 0;
				Clrscr();
				break;
			}
			}
			break;
		}

		case VK_LEFT: {
			switch (page) {
			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (vitri == 0) vitri = 3;
				else --vitri;
				break;
			}
			}
			break;
		}

		case VK_RIGHT: {
			switch (page) {
			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				vitri = (++vitri) % 4;
				break;
			}
			}
			break;
		}

		}
	}
}

void Event() {
	while (true) {
		DWORD DWNumberOfEvent = 0;
		DWORD DWNumberOfEventsRead = 0;

		HANDLE HConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
		GetNumberOfConsoleInputEvents(HConsoleInput, &DWNumberOfEvent);

		if (DWNumberOfEvent) {
			INPUT_RECORD* eventbuffer = new INPUT_RECORD[DWNumberOfEvent];
			ReadConsoleInput(HConsoleInput, eventbuffer, DWNumberOfEvent, &DWNumberOfEventsRead);

			for (DWORD i = 0; i < DWNumberOfEvent; i++) {
				if (eventbuffer[i].EventType == KEY_EVENT) {
					HandleKeyInput(eventbuffer[i].Event.KeyEvent);
				}
				if (page == MAIN_MENU) {
					DrawTitle();
					MainMenu(vitri);
				}
				else if (page == FUNCTION_MENU) {
					DrawTitleWithInstruction();
					FunctionMenu(vitri);
				}
				else if (page == SEARCH_MENU) {
					DrawTitleWithInstruction();
					SearchMenu(vitri);
				}
				else if (page == VIEW_MENU) {
					DrawTitleWithInstruction();
					ViewMenu(vitri);
				}
				else if (page == EDIT_MENU) {
					DrawTitleWithInstruction();
					EditMenu(vitri);
				}
				else if (page == GAME_MENU) {
					DrawTitleWithInstruction();
					GameMenu(vitri);
				}
				else if (page == VIEW_RANDOM_WORD_MENU) {
					DrawTitle();
					ViewRandomWordMenu();
				}
				else if (page == SEARCH_FOR_KEYWORD_MENU) {
					DrawTitle();
					SearchForKeyWordMenu(KeyWord);
				}
				else if (page == FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU) {
					FirstHelperSearchForKeyWordMenu(vitri, KeyWord);
				}
				else if (page == SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU) {
					SecondHelperSearchForKeyWordMenu(vitri, KeyWord);
				}
				else if (page == GUESS_DEFINITION_FROM_WORD_MENU) {
					DrawTitle();
					GuessDefinitionFromWordMenu(vitri);
				}
				else if (page == HISTORY_OF_SEARCHING_MENU) {
					DrawTitle();
					HistoryOfSearchingMenu();
				}
			}
		}
	}

}