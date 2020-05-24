/*************************************************************************
 * Program Name:	player.cpp
 * Author:		Banks Cargill
 * Date:		8/13/2019
 * Description:		Implementation file for player class.
 * 	
 * 			This class implements the game and allows the user
 * 			to move through the linked spaces.
 *
 * 			To play the game, create a player object in main
 * 			then have it execute the playGame function.
 *************************************************************************/

#include "player.hpp"

/*************************************************************************
 * Constructor
 *
 * creats linked space, steps remaining to 10 and current space to entrance
 * Creates Backpack item for user's objects
 *************************************************************************/
Player::Player()
{
	stepsRemaining = 8;
	jansport = new Backpack();

	//create new space objects
	entr = new Entrance();
	hall = new Hallway();
	inter = new Intersection();
	pit = new Snakepit();
	trophy = new Trophyroom();
	puzz = new Puzzleroom();

	//point each at the correct space objects at N,S,E,W to create linked space
	entr->setAdj(nullptr, hall, nullptr, nullptr);
	hall->setAdj(entr, inter, nullptr, nullptr);
	inter->setAdj(hall, nullptr, pit, trophy);
	pit->setAdj(nullptr, nullptr, inter, nullptr);
	trophy->setAdj(nullptr, puzz, inter, nullptr);
	puzz->setAdj(trophy, nullptr, nullptr, nullptr);

	//set current space
	currentSpace = entr;
}


/*************************************************************************
 * destructor
 *************************************************************************/
Player::~Player()
{
	delete entr;
	delete hall;
	delete inter;
	delete pit;
	delete trophy;
	delete puzz;

	delete jansport;
}


/*************************************************************************
 * Displays the number of steps the user has remaining
 *************************************************************************/
void Player::printSteps()
{
	cout << endl << "You have " << stepsRemaining << " hours remaining.";
}


/*************************************************************************
 * Gives the user the choice of spaces they can move to. Sets the current
 * 	space to their choice and decrements the number of steps remaining
 *************************************************************************/
void Player::moveSpace()
{

	//if the adjacent space is not null, print out its name and allow user to select it
	//to the north
	if (currentSpace->toN() != nullptr){
		cout << endl << (currentSpace->toN()) -> getName()
			 << " is North. Enter '1' to go there. \n";
	}
	//to the south
	if (currentSpace->toS() != nullptr){
		cout << endl << (currentSpace->toS()) -> getName()
			 << " is South. Enter '2' to go there. \n";
	}
	//to the east
	if (currentSpace->toE() != nullptr){
		cout << endl << (currentSpace->toE()) -> getName()
			 << " is East. Enter '3' to go there. \n";
	}
	//to the west
	if (currentSpace->toW() != nullptr){
		cout << endl << (currentSpace->toW()) -> getName()
			 << " is West. Enter '4' to go there. \n";
	}

	cout <<endl;
	//get and validate user input
	int nextSpace = rangeIntegerValidationString(1, 4, "Which direction would you like to go?");
	//assign user chosen space to current space
	switch (nextSpace)
	{
		case 1: currentSpace = currentSpace->toN();
			break;
		case 2: currentSpace = currentSpace->toS();
			break;
		case 3: currentSpace = currentSpace->toE();
			break;
		case 4: currentSpace = currentSpace->toW();
			break;
	}


	//subtract the number of steps to the step counter
	stepsRemaining -= 1;

	cout << endl << "You are now in " << currentSpace->getName() << "!";

}


/*************************************************************************
 * This function implements gameplay by presenting the user with a menu 
 * 	and looping through until the user chooses to quit, steps run out,
 * 	the user "dies", or the user wins.
 *************************************************************************/
void Player::playGame()
{
	int gameChoice;

	//print intro and art
	menuIntro();

	bool exitProgram = false;

	while (exitProgram==false && stepsRemaining>0 && (!jansport->searchItems("Drool")) && (!jansport->searchItems("Snakebite"))){
		//show the game menu and let user decide what they would like to do
		gameChoice = displayGameMenu();
		switch (gameChoice){
			case 1: currentSpace->interact(jansport);
				break;
			case 2: moveSpace();
				break;
			case 3: jansport->printItems();
				break;
			case 4: printSteps();
				break;
			case 5: exitProgram=true;
				break;
		}
	}
	if (jansport->searchItems("Snakebite")){
		cout << "Everything slowly fades from your vision... "
			"\n\nGame Over\n"<<endl;
	}
	//if user runs out of steps, they lose
	else if (stepsRemaining <= 0){
		cout << "\n\nYou ran out of time. Everything slowly fades from your vision..."
		       	"\n\nGame Over"	<< endl;
	}
	//if user completes the riddles, they have won
	else if (jansport->searchItems("Drool")){
		
		cout <<"\n\nYou've won! \n\n";

		cout <<"\nYou're vision suddenly fades into darkness and you wake up"
			"\nwith a large wet spot on your pillow next to your mouth."
			"\nThat must be one of the most vivid dreams you've ever had."
			"\nWho knew a dream could feel so real..."<<endl;
	}
	//if user quits, game ends
	else{
		cout << endl << "Exiting game...\n\n" << endl;
	}
}
