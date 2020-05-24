/*************************************************************************
* Program Name:		puzzleroom.hpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Header file for Puzzleroom derived class
***********************************************************************/

#ifndef PUZZLEROOM_HPP
#define PUZZLEROOM_HPP

#include "space.hpp"

class Puzzleroom : public Space{
	public:
		//constructor and destructor
		Puzzleroom();
		virtual ~Puzzleroom();

		virtual void interact(Backpack*);

};

#endif

