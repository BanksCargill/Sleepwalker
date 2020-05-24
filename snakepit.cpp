/*************************************************************************
* Program Name:		snakepit.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for Snakepit derived class
*
* 			This space hold the gem (key) to open the puzzle
* 			room. To access the gem, you have to have the torch
* 			to get across the shallow pit of snakes.		
************************************************************************/

#include "snakepit.hpp"

/************************************************************************
* Constructor
***********************************************************************/
Snakepit::Snakepit() : Space()
{
	name = "A Dark Eerie Room";
	ID = 4;
}

/************************************************************************
 * Destructor
 **********************************************************************/
Snakepit::~Snakepit()
{}

/************************************************************************
* Function for the user to look around the entrance space
***********************************************************************/
void Snakepit::interact(Backpack* stuff){
	
	if (stuff->searchItems("Torch")){
		if (stuff->searchItems("Gem")){
			cout << "You see the long shallow pit filled with adders with \n"
				"nothing visible on the other side"<<endl;
		}	
		else{
			cout << "\n\nHaving just entered the room, you see a long shallow pit \n"
				"filled with adders. Across the pit, the light from your \n"
				"torch catches something green. Would you like to use \n"
				"the torch to try to cross the pit to investigate further?"<<endl;
			cout << "Press 1 for yes and 2 for no: ";
			int useTorch = rangeIntegerValidation(1, 2);
			if (useTorch==1){
				cout << "\n\nYou wave the torch from side to side and the snakes slowly \n"
					"move aside, hissing angrily at the disturbance. You've made \n"
					"it to the other side and can now clearly see an incredibly \n"
					"beautiful green gem resting on a dais. Should you take the gem?"<<endl;
				cout << "Enter 1 for yes and 2 for no: ";
				int takeGem = rangeIntegerValidation(1,2);
				if (takeGem==1){
					cout << "\n\nYou've succesfully taken the gem and returned across the pit of adders." <<endl;
					stuff->addItem("Gem");
				}
				else{
					cout << "\n\nYou return across the pit to the entrance of the room."<<endl;
				}
			}
			else{
				cout << "\n\nYou gaze across the pit, wondering what the green item is..."<<endl;
			}
		}	
	}
	else{
		cout << "\n\nIt is so dark in this room. You can only tell that \n"
			"the room is long and narrow. Would you like to feel your \n"
			"way across the room?"<<endl;
		cout << "Press 1 for yes and 2 for no: ";
		int getBit = rangeIntegerValidation(1,2);
		if (getBit==1){
			cout << "\n\nYou start to feel your way across the room when you hear \n"
				"hissing all around your feet. \n\n"
				" ~ ~ ~ ~ ~ ~   !!! SNAKES !!!   ~ ~ ~ ~ ~ ~ \n"
				"\nYou've been bitten..."<<endl;
			stuff->addItem("Snakebite");
		}
		else{
			cout << "\n\nYou stand in the darkness wondering what might be..."<<endl;
		}
	}
}
