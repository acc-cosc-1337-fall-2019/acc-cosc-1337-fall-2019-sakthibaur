#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonal 1", "[O wins with 1 5 9]")
{
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O 
	//O wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
}

TEST_CASE("Test win diagonal 2", "[X wins with 3 5 7]")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test tie")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//no winner
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}

TEST_CASE("Test win by first column 4", "[X wins first column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 1,5,9 and 13
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}



TEST_CASE("Test win by second column 4", "[X wins second column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   second column win are user positions 2,6,10 and 14
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column 4", "[X wins third column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 3,7,11, and 15
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by fourth column 4", "[X wins fourth column 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 4,8,12, and 16
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row 4", "[X wins first row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 1,2,3, and 4
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row 4", "[X wins second row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 5,6,7, and 8
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(5);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row 4", "[X wins third row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 9,10,11, and 12
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(9);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by fourth row 4", "[X wins fourth row 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 13,14,15, and 16
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(13);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top left 4", "[O wins diagonally from top left 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 1,6,11, and 16
	   */
	TicTacToe4 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
	board.mark_board(1);//O         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//O 
	//O wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
}

TEST_CASE("Test win diagonally from bottom left 4", "[X wins diagonally from bottom left 4]")
{ /* Tic Tac Toe Board
		1234
		5678
		9[10][11][12]
		[13][14][15][16]
	   First column win are user positions 4,7,10, and 13
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 

	//X wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}

TEST_CASE("Test for no winner 4")
{ /* Tic Tac Toe Board
		123
		456
		789
		board state will be:
		xox
		oox
		xxo
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}

TEST_CASE("test set first player X")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("test set first player O")
{
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("test game over")
{
	TicTacToe3 board;
	REQUIRE(board.game_over() == false);
}