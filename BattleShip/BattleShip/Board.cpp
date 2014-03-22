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


void Board::printBoard()
{
    auto count = 0;
    //Print Board
    cout << " __________" << endl <<  "|";
    for(int i = 0; i < _vec.size(); i++)
    {
        for(int k = 0; k < _vec[0].size(); k++)
        {
            cout << _vec[i][k];
            count++;
            if( count == 10)
            {
                cout << endl;
                cout << "----------" << endl;
                count = 0;
            }
            
        }
    }
    
}


void Board::printBoardTest(vector<int> myvec)
{
    
    
    
    
    
    
    
    
    
}


