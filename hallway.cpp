/*************************************************************************
* Program Name:		hallway.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for hallway derived class
* 			
* 			Creates gamespace where user can interact with
* 			a sconce to take a torch from the wall.
************************************************************************/

#include "hallway.hpp"

/************************************************************************
 * Constructor
 ***********************************************************************/
Hallway::Hallway() : Space(){
    name = "Hallway";
    ID = 2;
}

Hallway::~Hallway()
{}

/***************************************************************************
 * Allows user to interact with hallway.
 * 	Able to collect a torch.
 **************************************************************************/
void Hallway::interact(Backpack* stuff){
	int torchChoice;
	
	if (stuff->searchItems("Torch")){
		cout << "\nThere is an empty sconce on the wall."<<endl;
	}
	else{
		cout << "\nThere is a sconce on the wall holding a brightly lit torch\n";
		cout << "Do you want to try to take it? (1 for yes and 2 for no)";

		//get and validate user input
		torchChoice = rangeIntegerValidation(1, 2);
		if (torchChoice == 1){
			stuff->addItem("Torch");
			cout << "\nYou now have a torch to provide light in your immediate surroundings";
		}
		else{
			cout << "\nThere is nothing else of interest in the hallway...";
		}
	}
}
