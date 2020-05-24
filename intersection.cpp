/*************************************************************************
* Program Name:		intersection.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for Intersection derived class
*
* 			This space simply intersects with the pit and 
* 			the trophy room		
************************************************************************/

#include "intersection.hpp"

/************************************************************************
* Constructor
***********************************************************************/
Intersection::Intersection() : Space()
{
	name = "Intersection";
	ID = 3;
}

/************************************************************************
 * Destructor
 **********************************************************************/
Intersection::~Intersection()
{}

/************************************************************************
* Function for the user to look around the entrance space
***********************************************************************/
void Intersection::interact(Backpack* stuff){

	cout << "\nIt appears that this is an intersection, branching east \n"
		  "and west. In both directions, you can only make out the \n"
		  "edges of a door. There must be rooms to either side. \n"
		  "There is nothing to do here but move on."<<endl;
}
