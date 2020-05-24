/*************************************************************************
* Program Name:		puzzleroom.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for Puzzleroom derived class
*
* 			This room is the final room of the game.
* 			To complete the game, you must have the gem from
* 			the snakepit and answer 2 riddles correctly.
************************************************************************/

#include "puzzleroom.hpp"

/************************************************************************
* Constructor
***********************************************************************/
Puzzleroom::Puzzleroom() : Space()
{
	name = "Puzzle Room";
	ID = 6;
}

/************************************************************************
 * Destructor
 **********************************************************************/
Puzzleroom::~Puzzleroom()
{}

/************************************************************************
* Function for the user to look around the entrance space
***********************************************************************/
void Puzzleroom::interact(Backpack* stuff){

	cout <<	"\nOn the southern wall, there is a bright green reflection coming \n" 
		"from a lemur's eye. As you get closer, you notice that it only \n"
		"has one eye and that eye is in fact a small green gem. \n"
		"The lemur does have another eye socket, but it looks like \n"
		"someone has removed the gem from that socket."<<endl;
	
	if (stuff->searchItems("Gem")){
		cout << "Would you like to try putting the gem from your bag into \n"
			"the lemur's empty eye?"<<endl;
		cout << "\nEnter 1 for yes and 2 for no: ";
		int socketGem = rangeIntegerValidation(1,2);
		if (socketGem==1){
			cout << "\nYOU'VE FOUND THE KEY. NOW YOU MUST ANSWER MY RIDDLES:\n\n"
				"IN A CERTAIN UNIVERSE, 1/2 OF 5 = 3. IF THE SAME \n"
				"PROPORTION HOLDS, WHAT IS THE VALUE OF 1/3 OF 10?\n"
				"Please enter an integer between 1 and 9:";
			int riddle1 = rangeIntegerValidation(1,9);
			if (riddle1==4){
				cout << "\nYOUR INTELLIGENCE IS ASTOUNDING. HERE IS ANOTHER:\n\n"
					"WHAT DIGIT IS THE LEAST FREQUENT BETWEEN THE \n"
					"NUMBERS 1 AND 1,000? \n"
					"\nPlease enter an integer between 0 and 9:";
				int riddle2 = rangeIntegerValidation(0,9);
				if (riddle2==0){
					cout << "\nYOU HAVE BESTED ME. YOU'RE FAR SMARTER THAN \n"
						"YOU SEEM." <<endl;
					stuff->addItem("Drool");
					cout << "HERE IS YOUR REWARD.\n"
						"\nYou have aquired Drool. "
						"What an odd reward..."<<endl;
				}
				else{
					cout << "\nCOUNTING IS NOT YOUR FORTE I SEE"<<endl;
					stuff->addItem("Snakebite");
				}
			}
			else{
				cout << "\nIT WOULD SEEM YOU SKIPPED SOME ALGEBRA CLASSES"<<endl;
				stuff->addItem("Snakebite");			
			}
		}
		else{
			cout << "\nWhat am I doing here again?" <<endl;
		}
	}
	else{
		cout << "\nI wonder why someone would take the lemur's eye..." <<endl;
	}
}

