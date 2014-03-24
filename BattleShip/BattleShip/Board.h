//
//  Board.h
//  BattleShip
//
//  Created by Eric Pelto on 3/17/14.
//  Copyright (c) 2014 Eric Pelto. All rights reserved.
//

#ifndef __BattleShip__Board__
#define __BattleShip__Board__

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Battleship.h"
using std::string;

class Board
{
public:
    Board();
	void makeAiBoard();
    void printBoard();
	

    void setACC();
    void setBattleship();
    void setSubmarine();
    void setDestroyer();
    void setPatrol();
   
    void takePosition(int row,int column);
	bool checkForLoser();
	
	
	bool checkBoard(int row, int column);
	void clearSpot(int row, int column);
	void hitTarget(int row, int column);
	void missedTarget(int row, int column);
	void printPlayerDisplay();

private:
    
	vector< vector<int>> _vec;
	vector< vector<int>> _displayVec;
    
};

#endif /* defined(__BattleShip__Board__) */
