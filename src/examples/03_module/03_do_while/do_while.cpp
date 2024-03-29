#include<iostream>
#include "do_while.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
	auto user_choice = 'y';

	do
	{
		//some more code for your program
		cout << "Loop again: y or n? ";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y'); //only time while statement needs semicolon is in do while loops
}

string menu(int menu_option)
{
	switch (menu_option)
	{
	case 1:
		//if there's other code but no return within case, have to include break
		return "Option 1";
	case 2:
		return "Option 2";
	case 3:
		return "Option 3";
	case 4:
		return "Option 4";
	default:
		return "Invalid";
	}
	return string();
}

//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/02_module/03_switch
folder.

*/

void run_menu()
{
	auto user_choice = 'y';
	auto choice = 0;

	do
	{

		cout << "Enter menu option: ";
		cin >> choice;

		while (choice < 1 || choice > 4)
		{
			cout << "Enter menu option: ";
			cin >> choice;
		}

		cout << menu(choice) << "\n";

		cout << "Continue: y or n";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
}



