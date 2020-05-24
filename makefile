# Author: 	Banks Cargill
# Date:		7.28.19 
# Description: 	Make file for cs 162 - Project 4 (Final Project)
 
#used makefile sample from TA as source for information

#Project name
PROJ = FinalProject_Cargill_Banks

#compiler
CXX = g++ -std=c++11

#Source Files
SRC = main.cpp
SRC += validation.cpp
SRC += backpack.cpp
SRC += menu.cpp
SRC += player.cpp
SRC += space.cpp
SRC += entrance.cpp
SRC += hallway.cpp
SRC += intersection.cpp
SRC += snakepit.cpp
SRC += trophyroom.cpp
SRC += puzzleroom.cpp

#create an object for each source file
OBJ = $(SRC:.cpp=.o)

#compiler flags
CFLAGS = -g -Wall -pedantic -std=gnu++11

#Valgrind options
VOPT = --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes

#phony:names of tages that aren't files
.PHONY: default debug clean zip

runProgram: output
	./output

output: $(OBJ)
	@echo "CC	$@"
	@$(CXX) $(CFLAGS) $^ -o $@

%.o: %.cpp
	@echo "CC	$^"
	@$(CXX) $(CFLAGS) -c $^

#-----------------------------------------------------
# make "label" will do the following actions
#-----------------------------------------------------

valgrind: output
	@valgrind $(VOPT) ./output


zip:
	zip $(PROJ) *.cpp *.hpp makefile *.pdf 

clean: $(CLEAN)
	@echo "RM	*.o"
	@rm -f *.o output 



