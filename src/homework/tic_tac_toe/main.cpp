#include "tic_tac_toe.h"

int main() 
{
	auto user_choice = 1;
	string player;

	do
	{
		TicTacToe game;
		cout << "Beginning player enter X or O: ";
		cin >> player;

		while (player != "X" && player != "O")
		{
			cout << "Invalid player selection. Please enter X or O: ";
			cin >> player;
		}

		//start game
		game.start_game(player);
		do
		{
			cin >> game;
			cout<<game;

		} while (game.game_over() == false);
		//need to add code to display winner/no winner, displays winner even when there is no winner
		cout << "Winner\nEnter 1 to play again, any other key to exit: ";
		cin >> user_choice;

	} while (user_choice == 1);

	cout << "Goodbye!";

	return 0;
}