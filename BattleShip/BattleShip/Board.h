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
#include <vector>

class Board
{
public:
    Board();
    
    
    
private:
    std::vector <std::pair<char,int> > elems[100];
    
    
};

#endif /* defined(__BattleShip__Board__) */