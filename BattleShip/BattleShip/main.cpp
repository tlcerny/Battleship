
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Board.h"
#include "Player.h"
#include "Battleship.h"


int main()
{
    Board playerBoard;
	Board aiBoard;

	aiBoard.makeAiBoard();

	
	playerBoard.printBoard();
	playerBoard.setACC();
	playerBoard.printBoard();
	playerBoard.setBattleship();
	playerBoard.printBoard();
	playerBoard.setDestroyer();
	playerBoard.printBoard();
	playerBoard.setSubmarine();
	playerBoard.printBoard();
	playerBoard.setPatrol();
	playerBoard.printBoard();
	

	int aiRowGuess = rand() % 10;
	int aiColumnGuess = rand() % 10;
	
	int row, column;
	while (true){
		
		//Check and see if the AI won
		if (playerBoard.checkForLoser()==false){
			
			cout << "You Lost to a Bot! Lolz!!!!" << endl;
			break;
		}

		//Checks to see if the AI lost
		else if (aiBoard.checkForLoser()==false){
			cout << "Congratz!!! You just beat a really dumb AI! Best Battleship player ever!" << endl;
			break;
		}

		
		//Game logic
		//AI Turn
		if (playerBoard.checkBoard(aiRowGuess, aiColumnGuess)){
			playerBoard.clearSpot(row, column);
			aiBoard.hitTarget(row, column);
		}

		playerBoard.printPlayerDisplay();
		playerBoard.printBoard();
		cout << "Awaiting Proper Firing Solution: " << endl;
		cin >> row;
		cin >> column;

		if (aiBoard.checkBoard(row, column)){
			cout << "You hit them!" << endl;
			aiBoard.clearSpot(row, column);
			playerBoard.hitTarget(row, column);

		}
		else{
			cout << "Haha!! You missed!!" << endl;
			playerBoard.missedTarget(row, column);
		}
		cout << "Its the smart AI's Turn" << endl;
		system("pause");

		
		aiRowGuess=rand() % 10;
		aiColumnGuess= rand() % 10;
	}

	system("pause");
    return 0;
}

