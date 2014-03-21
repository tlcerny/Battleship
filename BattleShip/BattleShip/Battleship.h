//
//  Battleship.h
//  BattleShip
//
//  Created by Aaron Pelto on 3/19/14.
//  Copyright (c) 2014 Eric Pelto. All rights reserved.
//

#ifndef __BattleShip__Battleship__
#define __BattleShip__Battleship__

#include "Player.h"
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using std::string;
using std::vector;
using std::pair;
using std::make_pair;


class Battleship : public Player
{
public:
    Battleship();
    bool shipValid();
    void setName();
    void setACC();
    void setBattleship();
    void setSubmarine();
    void setDestroyer();
    void setPatrol();
    string getName();
    
private:
    string _name;
    string _health;
    string _location;
    bool dead;
    
};


#endif /* defined(__BattleShip__Battleship__) */
