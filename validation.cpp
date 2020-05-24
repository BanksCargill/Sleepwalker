/*************************************************************
 * Program Name:	validation.cpp
 * Author:		Banks Cargill
 * Date:		7.15.19
 * Description:		This class handles all input validation
 * 			from the user.
 *********************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h> //to be able to use exit function
#include <cctype> //for tolower function

using std::cout;
using std::string;
using std::cin;
using std::endl;

/****************************************************************************************
 * This function takes two integers representing the minimum and maximum allowed entries
 * 	It returns an integer after ensuring it's valid according to the min/max.
 *
 * 	http://www.cplusplus.com/forum/beginner/58833/
 ****************************************************************************************/
int rangeIntegerValidation(int min, int max)
{
	int retInteger;
	
	//infinite loop until user enters valid integer (return)
	while (true)
	{
		cin >> retInteger;
		if (retInteger >= min && retInteger <= max){
			cin.clear();
			cin.ignore(1000, '\n');
			return retInteger;
		}
		else
		{	cout << "Input must be a number between " << min <<" and "; 
			cout << max << ". Please try again." <<endl<<endl;
			//clear error flag and skip to next line (ignore)
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
}
/****************************************************************************************
 * This function takes two integers representing the minimum and maximum allowed entries,
 * 	and a string as a prompt for the user. It returns an integer after ensuring it's 
 * 	valid according to the min/max.
 *
 * 	http://www.cplusplus.com/forum/beginner/58833/
 ****************************************************************************************/
int rangeIntegerValidationString(int min, int max, string prompt)
{
	int retInteger;
	
	//infinite loop until user enters valid integer (return)
	while (true)
	{
		cout << prompt <<endl;
		cin >> retInteger;
		if (retInteger >= min && retInteger <= max){
			cin.clear();
			cin.ignore(1000, '\n');
			return retInteger;
		}
		else
		{	cout << "Input must be a number between " << min <<" and "; 
			cout << max << ". Please try again." <<endl<<endl;
			//clear error flag and skip to next line (ignore)
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
}

/***************************************************************************************
 * This function takes a prompt as a parameter and returns an integer selected by 
 * 	the user,after ensuring that the integer entered is positive.
 *
 * 	http://www.cplusplus.com/forum/beginner/58833/
 ***************************************************************************************/

int posIntegerValidation(string prompt)
{
	int retInteger;
	
	while (true)
	{
		cout <<prompt<<endl;
		cin >> retInteger;
		if (retInteger > 0)
		{
			return retInteger;
		}
		else
		{
			cout << "Input must be a number be positive."; 
			cout << " Please try again." <<endl<<endl;
			//clear error flag and skip to next line (ignore)
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
}

/****************************************************************************************
 * This function takes 2 characters and a string as a prompt for the user. It returns 
 * 	a character selected by the user after ensuring it is valid according to parameters
 *
 *
 * 	http://www.cplusplus.com/forum/beginner/58833/
 ****************************************************************************************/

char charValidation(char alpha, char bravo, char charlie, char delta, string prompt)
{
	string stringEntry;
	char entry;
	//unconditional while loop
	while (true)
	{
		//prompt and store as string
		cout << prompt << endl;
		cin >> stringEntry;
		
		//check for one char entry and validate it is one of the 2 allowed chars
		if (stringEntry.size() > 1)
		{
			cout <<"Invalid input, please try again." <<endl <<endl;
		}
		else
		{
			entry = stringEntry.at(0);
			entry = tolower(entry);
		
			if (entry!=alpha && entry!=bravo && entry!=charlie && entry!=delta)
			{
				cout << "Invalid input, please try again." <<endl<<endl;
				
			}	
			else
			{
				return entry;
			}
		}				
	}
}
/****************************************************************************************
 * This function takes two double representing the minimum and maximum allowed entries
 * 	It returns a double after ensuring it's valid according to the min/max.
 *
 ****************************************************************************************/
double rangeDoubleValidation(double min, double max, string prompt)
{
	double retDouble;
	
	//infinite loop until user enters valid integer (return)
	while (true)
	{
		cout << prompt <<endl;
		cin >> retDouble;
		if (retDouble >= min && retDouble <= max){
			cin.clear();
			cin.ignore(1000, '\n');
			return retDouble;
		}
		else{
			cout << "Input must be a number between " << min <<" and "; 
			cout << max << ". Please try again." <<endl<<endl;
			//clear error flag and skip to next line (ignore)
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
}
