//
//  Board.cpp
//  BattleShip
//
//  Created by Eric Pelto on 3/17/14.
//  Copyright (c) 2014 Eric Pelto. All rights reserved.
//
#include "Board.h"
#include "Player.h"
#include <iostream>
#include <vector>
#include <utility>
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
        }
    
}

void Board::takePosition(int row,int column)
{

	_vec[row][column] = 1;

}


void Board::printBoard()
{
    auto count = 0;
    //Print Board
    for(int i = 0; i < _vec.size(); i++)
    {
        for(int k = 0; k < _vec[0].size(); k++)
        {
            cout << _vec[i][k];
            count++;
            if( count == 10)
            {
                cout << endl;
                count = 0;
            }
            
        }
    }
    
}


void Board::setACC()
{
	int row, column;
	for(auto j = 0; j <=4; j++)
	{
		
		cout << "place aircraft carrier using position (ij)" << endl;
		cin >> row;
		cin >> column;

		cout << "hello" << endl;
		
		takePosition(row,column);
	}
  
}


void Board::setBattleship()
{
    
}
void Board::setSubmarine()
{
    
}
void Board::setDestroyer()
{
    
}
void Board::setPatrol()
{
    
}

void Board::setName()
{
    
}

string Board::getName()
{
    return _name;
}


bool shipValid()
{
    bool valid = false;
    
    
    return valid;
    
}