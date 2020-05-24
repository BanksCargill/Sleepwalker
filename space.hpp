/*************************************************************************
 * Program Name:	space.hpp
 * Author: 		Banks Cargill
 * Date: 		8/13/2019
 * Description:		Header file for Space base class. 
 * 			Space is abstract.
 ************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include "menu.hpp"
#include "backpack.hpp"

class Space
{
protected:
    Space *north, *south, *east, *west;
    string name;
    int ID;

public:
    Space();
    virtual ~Space();

    Space* toN();
    Space* toS();
    Space* toE();
    Space* toW();

    string getName();
    int getID();

    void setAdj(Space*, Space*, Space*, Space*);

    virtual void interact(Backpack*) = 0;
};

#endif
