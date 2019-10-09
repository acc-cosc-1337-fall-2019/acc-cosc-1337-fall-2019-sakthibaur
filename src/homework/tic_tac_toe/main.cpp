#include "tic_tac_toe.h"
#include<typeinfo>

int main() 
{
	auto user_choice = 1;
	int position;
	string player;
	//vector<int> valid_pos = { 1,2,3,4,5,6,7,8,9 };
	do
	{
		TicTacToe game;
		cout << "Beginning player enter X or O: ";
		cin >> player;
		//check player selection, change to while loop?
		while (player != "X" && player != "O")
		{
			cout << "Invalid player selection. Please enter X or O: ";
			cin >> player;
		}
		//start game
		game.start_game(player);

		do
		{
			game.display_board();
			cout << "Enter position for " << game.get_player() << ": ";
			cin >> position;
			while (position < 1 || position > 9)
			{
				cout << "Invalid position. Please enter a number 1-9: ";
				cin >> position;
			}
			game.mark_board(position);

		} while (game.game_over() == false);
		//need to add code to display winner/no winner, displays winner even when there is no winner
		game.display_board();
		cout << "Winner\nEnter 1 to play again, any other key to exit: ";
		cin >> user_choice;

	} while (user_choice == 1);

	cout << "Goodbye!";

	return 0;
}