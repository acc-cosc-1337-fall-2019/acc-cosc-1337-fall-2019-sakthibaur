#ifndef  TIC_TAC_TOE_H//header guard
#define  TIC_TAC_TOE_H

#include<string>
#include<vector>
#include<iostream>

using std::string; using std::vector;
using std::ostream; using std::istream;

//h
/*
Represents one game of tic tac toe.
*/
class TicTacToe
{
public:
	TicTacToe() {};
	TicTacToe(int size) : pegs(size*size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner()const;
	const std::vector<std::string>& get_pegs();
	friend ostream& operator<<(ostream& out, const TicTacToe& t);
	friend istream& operator>>(istream& in, TicTacToe& t);

protected:
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;
	vector<string> pegs;

private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;
};

#endif // ! TIC_TAC_TOE_H