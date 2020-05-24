/*************************************************************************
 * Program Name:	space.hpp
 * Author: 		Banks Cargill
 * Date: 		8/13/2019
 * Description:		Implementation file for Space class. This is an
 * 			abstract class that is implemented in its derived
 * 			classes. Creates a space that is linked to four
 * 			other spaces by pointer.
 ************************************************************************/

#include "space.hpp"

//constructor, sets all space pointers, name, and ID number to null values
Space::Space()
{
    north = nullptr;
    south = nullptr;
    east = nullptr;
    west = nullptr;
    ID = 0;
    name = "null";
}

Space::~Space()
{}

/**************************************************************************
 * each of these functions returns a pointer to the adjacent space objects
 **************************************************************************/
Space* Space::toN()
{
    return north;
}

Space* Space::toS()
{
    return south;
}

Space* Space::toE()
{
    return east;
}

Space* Space::toW()
{
    return west;
}


/**************************************************************************
 * Returns the name of the space
 **************************************************************************/
string Space::getName()
{
    return name;
}


/**************************************************************************
 * Returns the ID
 **************************************************************************/
int Space::getID()
{
    return ID;
}


/**************************************************************************
 * function for setting adjacent spaces
 **************************************************************************/
void Space::setAdj(Space* n, Space* s, Space* e, Space* w)
{
    north = n;
    south = s;
    east = e;
    west = w;
}

/**************************************************************************
 * Function for the player to interact with the space and the items stored
 * 	in their backpack
 *
 * Takes a pointer to a backpack class item
 **************************************************************************/
void Space::interact(Backpack* stuff)
{}
