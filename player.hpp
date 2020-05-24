/*************************************************************************
 * Program Name:	player.hpp
 * Author:		Banks Cargill
 * Date:		8/13/2019
 * Description:		Header file for player class. This class
 * 			will implement gameplay.
 ************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "menu.hpp"
#include "space.hpp"
#include "entrance.hpp"
#include "hallway.hpp"
#include "intersection.hpp"
#include "snakepit.hpp"
#include "trophyroom.hpp"
#include "puzzleroom.hpp"

class Player{
	private:
		//pointers to space objects. These create the linked game structure
		Space *currentSpace,
			*entr,
			*hall,
			*inter,
			*pit,
			*trophy,
			*puzz;
		
		//container for user to store items
		Backpack* jansport;
		int stepsRemaining;
		//private methods for in-class gameplay
		void printSteps();
		void moveSpace();
	
	public:
		//constructor and destructor, create linked spaces at game instantiation
		//and delete them when the game terminates
		Player();
		~Player();
		
		//presents menu to user to control game
		void playGame();

};

#endif 
