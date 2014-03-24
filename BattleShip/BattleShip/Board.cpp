//
//  Board.cpp
//  BattleShip
//
//  Created by Eric Pelto on 3/17/14.
//  Copyright (c) 2014 Eric Pelto. All rights reserved.
//
#include "Board.h"

#include <iostream>
#include <vector>
#include <utility>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::make_pair;


Board::Board()
{
   
    
    //vector< vector <pair<char,int> > > elems;
    
    
    
    //Initialize everything on board to zero
    for(int i = 1; i <= 10; i++)
        {
            vector<int> temp2;
            for(int j = 1; j<=10;j++)
            {
                temp2.push_back(0);
            
            }
            _vec.push_back(temp2);
			_displayVec.push_back(temp2);
        }
    
}

void Board::makeAiBoard()
{
	    
	//Initialize everything on board to zero
    for(int i = 1; i <= 10; i++)
        {
            vector<int> temp2;
            for(int j = 1; j<=10;j++)
            {
                temp2.push_back(0);
            
            }
            _vec.push_back(temp2);

        }

	_vec[0][0] = 1;
	_vec[0][1] = 1;
	_vec[0][2] = 1;
	_vec[0][3] = 1;
	_vec[0][4] = 1;
	_vec[1][0] = 1;
	_vec[1][1] = 1;
	_vec[1][2] = 1;
	_vec[1][3] = 1;
	_vec[2][0] = 1;
	_vec[2][1] = 1;
	_vec[2][2] = 1;
	_vec[3][0] = 1;
	_vec[3][1] = 1;
	_vec[3][2] = 1;
	_vec[4][0] = 1;
	_vec[4][1] = 1;
}

void Board::printPlayerDisplay()
{
	auto count = 0;
	//Print Board
	cout << endl;
	cout << "PLAYER GUESSING BOARD" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < _displayVec.size(); i++)
	{
		cout << "| ";
		for (int k = 0; k < _displayVec[0].size(); k++)
		{
			cout << _displayVec[i][k] << " | ";
			count++;
			if (count == 10)
			{
				cout << endl;
				cout << "-----------------------------------------" << endl;
				count = 0;
			}

		}

	}
	cout << endl;
}

void Board::takePosition(int row,int column)
{
	
		_vec[row][column] = 1;
	
	

}


void Board::printBoard()
{
    auto count = 0;
    //Print Board
	cout << endl;
	cout << "PLAYER BOARD" << endl;
	cout << "-----------------------------------------" << endl;
    for(int i = 0; i < _vec.size(); i++)
    {
		cout << "| ";
        for(int k = 0; k < _vec[0].size(); k++)
        {
			cout << _vec[i][k] << " | ";
            count++;
            if( count == 10)
            {
				cout << endl;
                cout << "-----------------------------------------"<<endl;
                count = 0;
            }
            
        }
		
    }
	cout << endl;
}


void Board::setACC()
{
	int row, column;
	char direction;


	cout << "place aircraft carrier using position (ij) followed by a direction" << endl;
	cin >> row;
	cin >> column;
	cin >> direction;

	//Down
	if (direction == 0x64){
		for (auto i = 0; i <= 4; i++){

			takePosition(row, column);
			row++;
		}
	}
	//Right
	else if (direction == 0x72){
		for (auto i = 0; i <= 4; i++){

			takePosition(row, column);
			column++;
		}

	}
	//Up
	else if (direction == 0x75){
		for (auto i = 0; i <= 4; i++){
			takePosition(row, column);
			row--;

		}

	}
	//Left
	else if (direction == 0x6c){
		for (auto i = 0; i <= 4; i++){
			takePosition(row, column);
			column--;

		}

	}
  
}


void Board::setBattleship()
{
	int row, column;
	char direction;


	cout << "place Battleship using position (ij) followed by a direction" << endl;
	cin >> row;
	cin >> column;
	cin >> direction;

	//Down
	if (direction == 0x64){
		for (auto i = 0; i <= 3; i++){

			takePosition(row, column);
			row++;
		}
	}
	//Right
	else if (direction == 0x72){
		for (auto i = 0; i <= 3; i++){

			takePosition(row, column);
			column++;
		}

	}
	//Up
	else if (direction == 0x75){
		for (auto i = 0; i <= 3; i++){
			takePosition(row, column);
			row--;

		}

	}
	//Left
	else if (direction == 0x6c){
		for (auto i = 0; i <= 3; i++){
			takePosition(row, column);
			column--;

		}

	}


}
void Board::setSubmarine()
{
	int row, column;
	char direction;


	cout << "place submarine using position (ij) followed by a direction" << endl;
	cin >> row;
	cin >> column;
	cin >> direction;

	//Down
	if (direction == 0x64){
		for (auto i = 0; i <= 2; i++){

			takePosition(row, column);
			row++;
		}
	}
	//Right
	else if (direction == 0x72){
		for (auto i = 0; i <= 2; i++){

			takePosition(row, column);
			column++;
		}

	}
	//Up
	else if (direction == 0x75){
		for (auto i = 0; i <= 2; i++){
			takePosition(row, column);
			row--;

		}

	}
	//Left
	else if (direction == 0x6c){
		for (auto i = 0; i <= 2; i++){
			takePosition(row, column);
			column--;

		}

	}

}
void Board::setDestroyer()
{
	int row, column;
	char direction;


	cout << "place Destroyer using position (ij) followed by a direction" << endl;
	cin >> row;
	cin >> column;
	cin >> direction;

	//Down
	if (direction == 0x64){
		for (auto i = 0; i <= 2; i++){

			takePosition(row, column);
			row++;
		}
	}
	//Right
	else if (direction == 0x72){
		for (auto i = 0; i <= 2; i++){

			takePosition(row, column);
			column++;
		}

	}
	//Up
	else if (direction == 0x75){
		for (auto i = 0; i <= 2; i++){
			takePosition(row, column);
			row--;

		}

	}
	//Left
	else if (direction == 0x6c){
		for (auto i = 0; i <= 2; i++){
			takePosition(row, column);
			column--;

		}

	}


}
void Board::setPatrol()
{
	int row, column;
	char direction;


	cout << "place Patrol using position (ij) followed by a direction" << endl;
	cin >> row;
	cin >> column;
	cin >> direction;

	//Down
	if (direction == 0x64){
		for (auto i = 0; i <= 1; i++){

			takePosition(row, column);
			row++;
		}
	}
	//Right
	else if (direction == 0x72){
		for (auto i = 0; i <= 2; i++){

			takePosition(row, column);
			column++;
		}

	}
	//Up
	else if (direction == 0x75){
		for (auto i = 0; i <= 1; i++){
			takePosition(row, column);
			row--;

		}

	}
	//Left
	else if (direction == 0x6c){
		for (auto i = 0; i <= 1; i++){
			takePosition(row, column);
			column--;

		}

	}


}

bool Board::checkForLoser(){


	//Initialize everything on board to zero
	for (int i = 0; i < 10; i++){
		
		for (int j = 0; j < 10; j++){

			if (_vec[i][j] == 1){
				return true;
			}
		}
	}
	return false;
}



bool Board::checkBoard(int row, int column){

	if (_vec[row][column] == 1){
		return true;
	}
	return false;
}

void Board::clearSpot(int row, int column){
	_vec[row][column] = 0;
}

void Board::hitTarget(int row, int column){
	_displayVec[row][column] = 9;
}

void Board::missedTarget(int row, int column){
	_displayVec[row][column] = 4;
}