#pragma once

#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{
public://defining member methods
	TicTacToe();
	void reset(void);
	bool move(int, int);
	void print(void);
	char over(void);
	int i, j;
	~TicTacToe();
private:
	char player1, player2;

	string status;   //won,draw or in progress status
	int grid[3][3];   //the 3by 3 board
	int row = 3;
	int col = 3;

};

#endif
