/*************************************************************************
* Program Name:		entrance.hpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Header file for Entrance derived class
***********************************************************************/

#ifndef ENTRANCE_HPP
#define ENTRANCE_HPP

#include "space.hpp"

class Entrance : public Space{
	public:
		//constructor and destructor
		Entrance();
		virtual ~Entrance();

		virtual void interact(Backpack*);

};

#endif
