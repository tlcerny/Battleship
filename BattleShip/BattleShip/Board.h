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
using std::string;

class Board: public Player
{
public:
    Board();
    void printBoard();
    
private:
    
    
};

#endif /* defined(__BattleShip__Board__) */
