/*********************************************************************
 * Program Name:	validation.hpp
 * Author:		Banks Cargill
 * Date:		7.1.19
 * Description:		input validation functions header file
 *********************************************************************/

#ifndef VALIDATION_HPP
#define VALIDATION_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

#include <random>
#include <algorithm>
#include <climits>
#include <cfloat>

#include <ctype.h>


using std::string;
using std::cin;
using std::cout;
using std::endl;

int rangeIntegerValidation(int, int);
int rangeIntegerValidationString(int, int, string);
int posIntegerValidation(string);
char charValidation(char, char, string);
double rangeDoubleValidation (double, double, string);

#endif
