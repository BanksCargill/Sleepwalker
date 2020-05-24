/*************************************************************************
 * Program Name:	backpack.hpp
 * Author: 		Banks Cargill
 * Date: 		8/13/2019
 * Description:		Header file for backpack class (container)
 ************************************************************************/

#ifndef BACKPACK_HPP
#define BACKPACK_HPP

#include "validation.hpp"

class Backpack
{
	private:
		//struct that makes up the items in the pack
		//doubly-linked item with a name variable
		struct Pack{
			string name;
			Pack *next, *prev;	

			Pack(string n, Pack *next1, Pack *prev1){
				name = n;
				next = next1;
				prev = prev1;
			}
		};

		Pack *front, *back;
		int numItems;

	public:
		//constructor and destructor
		Backpack();
		~Backpack();

		bool searchItems(string);
		void addItem(string);
		void removeItem();
		void tradeItem(string, string);
		void printItems();
};

#endif 
