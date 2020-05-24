/*************************************************************************
* Program Name:		trophyroom.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for Trophyroom derived class
*
* 			This space is a hallway in essence to the puzzle room.
* 			There is nothing to interact with here.
*************************************************************************/

#include "trophyroom.hpp"

/************************************************************************
* Constructor
***********************************************************************/
Trophyroom::Trophyroom() : Space()
{
	name = "Trophy Room";
	ID = 5;
}

/************************************************************************
 * Destructor
 **********************************************************************/
Trophyroom::~Trophyroom()
{}

/************************************************************************
* Function for the user to look around the entrance space
***********************************************************************/
void Trophyroom::interact(Backpack* stuff){
	
	cout << "Ornamenting the walls of the room are beasts of every imaginable \n"
		"type. How any one person could possibly have hunted all of these \n"
		"is inconceivable. You are impressed despite your slight disgust. \n"
		"There doesn't appear to be anything to interact with here."<<endl;
}
