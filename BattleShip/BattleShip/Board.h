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

class Board: public Player
{
public:
    Board();
    void printBoard();
    bool shipValid();
    void setName();
    void setACC();
    void setBattleship();
    void setSubmarine();
    void setDestroyer();
    void setPatrol();
    string getName();
    void takePosition(int row,int column);
private:
    string _name;
    string _health;
    string _location;
    bool dead;
    
};

#endif /* defined(__BattleShip__Board__) */
