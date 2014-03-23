
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
	
	int boatsToPlace=5;


	b.printBoard();
	//b.printAiBoard();
	system("pause");
    return 0;
}

