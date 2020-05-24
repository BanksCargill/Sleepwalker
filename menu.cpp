/*************************************************************************
 * Program Name:	menu.cpp
 * Author: 		Banks Cargill
 * Date: 		8/13/2019
 * Description:		Implementation file for menu display function.
 ************************************************************************/

#include "menu.hpp"

/**************************************************************************
 * Function to display introduction of the game
 *************************************************************************/
void menuIntro(){
	cout << "\n\n------------------------------------------------------------"<<endl;
	cout << "---------------------- Sleepwalker -------------------------"<<endl;
	cout << "------------------------------------------------------------\n"<<endl;

	cout<<  "You feel a bit dazed with blurry vision and a throbbing headache.\n"
		"Above you, you can see the moon shining through what appears to\n"
		"be a metal grate. Where are you???" <<endl<<endl;
	cout<<	"As if in response to your question, you hear a voice that shakes\n"
		"your core:"<<endl;
	cout<<	"\nFIND THE KEY AND ANSWER MY RIDDLES TO RETURN HOME.  \n"
		"YOU HAVE 8 HOURS TO COMPLETE THIS TASK" <<endl<<endl;
	cout<<	"Still confused, but with at least some semblance of direction\n"
		"you set off...";
}

/**************************************************************************
 * Function to display the menu at each step of the game.
 *************************************************************************/
int displayGameMenu(){
	cout << "\n\n1. Look around you.\n"
		"2. Move to an adjacent space.\n"
		"3. Print your list of items.\n"
		"4. Print your remaining steps.\n"
		"5. Quit the game.\n"<<endl;

    return rangeIntegerValidation(1,5);
}
