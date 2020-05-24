/*************************************************************************
* Program Name:		trophyroom.hpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Header file for Trophyroom derived class
***********************************************************************/

#ifndef TROPHYROOM_HPP
#define TROPHYROOM_HPP

#include "space.hpp"

class Trophyroom : public Space{
	public:
		//constructor and destructor
		Trophyroom();
		virtual ~Trophyroom();

		virtual void interact(Backpack*);

};

#endif
