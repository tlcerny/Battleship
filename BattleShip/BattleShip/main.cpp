
#include <iostream>
using std::cout;
using std::endl;

#include <iostream>
#include "Board.h"
#include "Player.h"
#include "Battleship.h"


int main()
{
    Board b;
	Battleship p;
	Player h;
	
	b.setACC();
	b.printBoard();
	system("pause");
    return 0;
}

