
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
	
	

	b.setACC();
	b.printBoard();
	b.printAiBoard();
	b.setBattleship();
	b.printBoard();
	b.setDestroyer();
	b.printBoard();
	b.setPatrol();
	b.printBoard();
	b.setSubmarine();
	b.printBoard();
	system("pause");
    return 0;
}

