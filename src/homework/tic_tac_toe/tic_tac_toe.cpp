#include "tic_tac_toe.h"
//cpp

void TicTacToe::set_next_player()
{
	if(next_player=="X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

void TicTacToe::check_column_win()
{

}

void TicTacToe::check_row_win()
{

}

void TicTacToe::check_diagonal_win()
{

}

void TicTacToe::clear_board()
{
}

void TicTacToe::check_board_full()
{

}

void TicTacToe::game_over()
{

}


void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

void TicTacToe : mark_board(int position)
{

}

string TicTacToe::get_player() const;
{
	return next_player;
}

void TicTacToe::display_board() const
{

}