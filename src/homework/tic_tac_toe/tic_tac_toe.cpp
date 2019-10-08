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

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i+6] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i+=3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
	{
		return true;
	}
	else
	{
	return false;
	}
	return false;
}

void TicTacToe::clear_board()
{
	vector<string> pegs{ 9, " " };
}

bool TicTacToe::check_board_full()
{
	return !(std::find(pegs.begin(), pegs.end(), " ")!=pegs.end());
}

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		return true;
	}
	return false;
}


void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}


void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i++)
	{
		if (i == 2 || i == 5 || i == 8)
		{
			cout << pegs[i] << "\n";
		}
		else
		{
			cout << pegs[i] << "|";
		}
	}
}