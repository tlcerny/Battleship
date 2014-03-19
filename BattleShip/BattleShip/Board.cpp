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
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::make_pair;


Board::Board()
{
    
    
    
    
        for(char ch = 'A'; ch <= 'J'; ch++)
        {
            for(int j = 1; j<=10;j++)
            {
            
                elems.push_back(make_pair(ch,j));
            
            }
        }
    
    

  
    
    
    for(auto i = 0; i < elems.size(); i++)
    {
        cout << elems[i].first << elems[i].second << endl;
    }
        

  
    
}
