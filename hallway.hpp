/*************************************************************************
* Program Name:		hallway.hpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Header file for Hallway derived class
***********************************************************************/

#ifndef HALLWAY_HPP
#define HALLWAY_HPP

#include "space.hpp"

class Hallway : public Space{
	public:
		//constructor and destructor
		Hallway();
		virtual ~Hallway();

		virtual void interact(Backpack*);

};

#endif
