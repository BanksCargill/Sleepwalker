/*************************************************************************
* Program Name:		intersection.hpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Header file for Intersection derived class
***********************************************************************/

#ifndef INTERSECTION_HPP
#define INTERSECTION_HPP

#include "space.hpp"

class Intersection : public Space{
	public:
		//constructor and destructor
		Intersection();
		virtual ~Intersection();

		virtual void interact(Backpack*);

};

#endif
