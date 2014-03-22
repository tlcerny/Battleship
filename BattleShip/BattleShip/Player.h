//
//  Player.h
//  BattleShip
//
//  Created by Eric Pelto on 3/20/14.
//  Copyright (c) 2014 Eric Pelto. All rights reserved.
//

#ifndef __BattleShip__Player__
#define __BattleShip__Player__


#include <string>
#include <iostream>
#include <vector>
#include <utility>
using std::string;
using std::vector;
using std::make_pair;
using std::pair;

class Player
{

    
    public:
    Player();
	
    string setName();
    string getName();
    void takePosition(int row,int column);
    
    protected:
    vector< vector<int>> _vec;   
    
    
    
};




#endif /* defined(__BattleShip__Player__) */
