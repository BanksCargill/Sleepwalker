/*************************************************************************
* Program Name:		snakepit.hpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Header file for Snakepit derived class
***********************************************************************/

#ifndef SNAKEPIT_HPP
#define SNAKEPIT_HPP

#include "space.hpp"

class Snakepit : public Space{
	public:
		//constructor and destructor
		Snakepit();
		virtual ~Snakepit();

		virtual void interact(Backpack*);

};

#endif
