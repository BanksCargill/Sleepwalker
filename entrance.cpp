/*************************************************************************
* Program Name:		entrance.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for Entrance derived class
* 			
* 			Creates gamespace where user begins.
* 			Nothing special to interact with here. 
* 			Just information.
************************************************************************/

#include "entrance.hpp"

/************************************************************************
* Constructor
***********************************************************************/
Entrance::Entrance() : Space()
{
	name = "Entrance";
	ID = 1;
}

/************************************************************************
 * Destructor
 **********************************************************************/
Entrance::~Entrance()
{}

/************************************************************************
* Function for the user to look around the entrance space
***********************************************************************/
void Entrance::interact(Backpack* stuff){

	cout << "\nThere are a few lamps on the walls that light the room \n"
		  "but no way to access the grate on the ceiling. There is \n"
		  "a doorway ahead of you that looks like it leads into a \n"
		  "hallway."<<endl;
}
