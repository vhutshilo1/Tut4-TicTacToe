#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe()
{


}

void TicTacToe::reset() //this allows for all positions to be cleared
{
	for (int i = 1; i = row; i++)
	{
		for (int j = 1; j = col; j++)
		{
			grid[i][j] = ' ';
		}
	}
}


bool TicTacToe::move(int row, int col)
{

	int position; //this is the position of the 9 instances formed by the 3by 3 grid

	int counter;//this counts up to the maximum number of moves which is 9
	for (counter = 1; counter = 9; counter++)
	{

		if (counter % 2 == 0)
		{

			cout << "enter position\n";
			cin >> position;
			grid[i][j] == 'o'; //this is the output of player 2
		}
		else
		{
			cout << "enter position\n";
			cin >> position;
			grid[i][j] == 'x';  //this is the output of player 1
		}
		switch (position)
		{
		case 1:
			i = 0, j = 0;
			break;
		case 2:

			i = 0, j = 1;
			break;
		case 3:

			i = 0, j = 2;
			break;
		case 4:

			i = 1, j = 0;
			break;
		case 5:

			i = 1, j = 1;
			break;
		case 6:

			i = 1, j = 2;
			break;
		case 7:

			i = 2, j = 0;
			break;
		case 8:


			i = 2, j = 1;
			break;
		case 9:


			i = 2, j = 2;
			break;
		default:
			cout << "invalid move\n";

		}


	}

	void TicTacToe::print() //
	{
		for (int i = 1; i = row; i++)
		{
			for (int j = 1; j = col; j++)
			{
				cout << grid[i][j] << "\t";
			}
			cout << endl;
		}
	}

	char TicTacToe::over()
	{
	}
	TicTacToe::~TicTacToe()
	{
	}
