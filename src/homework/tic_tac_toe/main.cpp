#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;


int main() 
{
	auto user_choice = 1;
	string player;
	TicTacToeManager manager;
	int game_type;

	do
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		TicTacToe* game;

		if (game_type == 3)
		{
			game = new TicTacToe3();
		}
		else
		{
			game = new TicTacToe4();
		}

		cout << "Enter X or O";
		cin >> player;

		while (player != "X" && player != "O")
		{
			cout << "Invalid player selection. Please enter X or O: ";
			cin >> player;
		}

		//start game
		game->start_game(player);

		while (game->game_over() == false)
		{
			cin >> *game;
			cout << *game;
		}

		manager.save_game(*game);

		cout << "Game over: ";
		cout << "Enter 1 to play again, any other key to exit: ";
		cin >> user_choice;

	} while (user_choice == 1);

	cout << "History: \n";
	cout << manager;

	cout << "Goodbye!";

	return 0;
}