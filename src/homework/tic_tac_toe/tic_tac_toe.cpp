#include "tic_tac_toe.h"
//cpp



bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() ||
		check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
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

string TicTacToe::get_winner()const
{
	return winner;
}

ostream& operator<<(ostream& out, const TicTacToe& t)
{

	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}

	return out;
}

istream& operator>>(istream& in, TicTacToe& t)
{
	int position;

	std::cout << "Enter position from 1 to " << t.pegs.size() << ": ";
	in >> position;
	t.mark_board(position);

	return in;
}


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
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
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

void TicTacToe::set_winner()
{
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}


