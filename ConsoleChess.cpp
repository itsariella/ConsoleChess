// ConsoleChess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

/*

void refreshBoard(string board[]);
void p1Move(string board[], string piece, string pos1, string pos2, bool p1turn);
void p2Move(string board[], string piece, string pos1, string pos2, bool p2turn);
*/


using namespace std;

void displayBoard(int ROWS, int COLS, string pattern1, string pattern2);
void displayMenu(char &option);
void input(char xAxis, string position);
int charToInt(char xAxis, string position);

int main()
{
	const int ROWS = 8;
	const int COLS = 8;

	bool p1turn = true;
	bool p2turn = true;
	bool checkmate = false;

	string board[ROWS][COLS];
	string pattern1 = " [  ] | (  ) |";
	string pattern2 = " (  ) | [  ] |";
	string position;

	char option;
	char xAxis = '0';

	
	displayMenu(option);
	if (option == '1')
	{
		displayBoard(ROWS, COLS, pattern1, pattern2);
		cout << endl;

		while (!checkmate)
		{
			if (p1turn)
			{
				cout << "Player 1's turn!" << endl;

				input(xAxis, position);
				charToInt(xAxis, position);
				//input move
				p1turn = false;
			}
			else if (p2turn)
			{
				cout << "Player 2's turn!" << endl;

				input(xAxis, position);
				//input move
				p1turn = true;
			}
			
		}

	}
	else if (option == 'Q')
	{
		return 0;
	}
		
	

  
}

void displayMenu(char &option)
{
	cout << "Welcome to Console Chess!" << endl;
	cout << "Press 1 to Start" << endl;
	cout << "Press Q to Close Window" << endl << endl;
	cin >> option;
	cout << endl;
}

void displayBoard(int ROWS, int COLS, string pattern1, string pattern2)
{
	for (int row = 0; row < ROWS; row = row++)
	{
		cout << "|";
		for (int col = 0; col < COLS / 2; col = col++)
		{
			if (row % 2 == 0)
			{
				cout << pattern1;

			}
			else
			{
				cout << pattern2;
			}
		}
		cout << endl;
		cout << "---------------------------------------------------------" << endl;
	}
}

void input(char xAxis,string position)
{
	cout << "Enter a position: ";
	cin >> xAxis >> position;
	while (position.length() != 1)
	{
		cout << "Invalid position" << endl;
		cout << "Enter position again: ";
		cin >> xAxis >> position;
	}
}

int charToInt(char xAxis, string position)
{
	int xPosition;
	position = "test";
	xPosition = position[0];
	return xPosition;
}

/*
void refreshBoard(string board[])
{

}

void p1Move(string board[], string piece, string pos1, string pos2, bool p1turn)
{

}

void p2Move(string board[], string piece, string pos1, string pos2, bool p2turn)
{
}


struct gameBoard
{
	pieces white;
	pieces black;
};

struct pieces
{
	pawn w1;


};

struct pawn
{
	int posX, posY;
	char color;
	//int move = movePiece();

	void movePiece(char color, int &posX, int &posY)
	{
		
		switch (color)
		{
			case 'w': 

				break;
			case 'b':

				break;

		}
	}


};
*/