/*************************************************************************
* Program Name:		backpack.cpp
* Author: 		Banks Cargill
* Date: 		8/13/2019
* Description:		Implementation file for backpack class.
* 			Creates a doubly-linked container for storing
* 			user's objects. Max of 3 objects
************************************************************************/

#include "backpack.hpp"
/************************************************************************
 * Constructor. Set front and back to null
 ***********************************************************************/
Backpack::Backpack(){
	back = front = nullptr;
	numItems = 0;
}

/************************************************************************
 * Destructor
 ***********************************************************************/
Backpack::~Backpack(){
	Pack *temp;

	//if only one value, just delete it and set it to nullptr
	for(int i = 0; i < numItems; i++){
		if (front == back){
			delete front;
			front = nullptr;
			back = nullptr;
 		}

		//if more than one value
		else if (front != nullptr){
			//save the memory location of the node to be deleted
			temp = front;
			//point front at the new front, back at the new front
			front = front->next;
			back->next = front;
			//free the memory that temp points at and set it to nullptr
			delete temp;
		}
	}
}

/************************************************************************
 * Function to add item to pack. Takes string (name) as parameter
 ***********************************************************************/
void Backpack::addItem(string s){
	Pack* addThing;

	//if there are no items and item does not already exist
	if (front == nullptr && !searchItems(s)){
		//create new node with correct value, point it at itself
		addThing = new Pack(s, addThing, addThing);
		//assign front and back to it
		front = addThing;
		back = addThing;

		numItems++;
	}

	//if there are fewer than 3 items in the bag and the item doesn't exist, you can add another
	else if(numItems < 3 && !searchItems(s)){
		//create a new node with the correct value
		addThing = new Pack(s, front, back);

		//point previous last node at it
		back->next = addThing;
		//and front node at it
		front->prev = addThing;
		//reassign back to the new node
		back = addThing;

		numItems++;
	}

	//if there are more than 3 items, no more can come in
	else if(numItems >= 3 && !searchItems(s)){
		cout << endl << endl << "You have too many items in your pack!";
	}

	//if the item already exists, user can't add it again.
	else if (searchItems(s)){
		cout << endl << "This item is already in your pack! You cannot add it again.";
	}


	addThing = nullptr;
}


/************************************************************************
 * Prints Numbered list of the items (no parameters, no return)
 ***********************************************************************/
void Backpack::printItems(){
	Pack *current;

	//check to see that list is not empty
	if (front == nullptr){
		cout << endl << "You don't have any items in your bag.";
	}
		
	//if only one item, just print it
	else if (front == back){
		cout << endl << numItems << ". " << front->name ;
	}
		
	//if it has multiple items, print them to screen
	else{
		current = front;
		cout << endl << "You have these items:" << endl;

		for(int i = 0; i < numItems; i++){
			//print name and index
			cout << (i+1) << ". " << current->name << endl;
			//point current at the next item
			current = current->next;
		}
	}


	current = nullptr;
}


/************************************************************************
 * Searches for an item in the list. 
 * Takes the string it is searching for as parameter
 * Returns true if it is found
 ***********************************************************************/
bool Backpack::searchItems(string s){
	Pack* query = front;
	bool found = false;

	//only search if there are items	
	if (query != nullptr){
		//loop through each item
		for (int i = 0; i < numItems; i++){
			//if the name matches the search string, set found to true
			if (query->name == s)
			found = true;

			query = query->next;
		}
	}

	//return whether item was found or not
	return found;
}
