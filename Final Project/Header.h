#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//creating a clss called Info to hold all the fuctions related to the informational part of the application
class Info {
	public: 
		string askName(string prompt);//function that asks name and takes the prompt
		int askAge(string prompt);//function that asks age and takes the prompt
		string askCountry(string prompt);//function that asks the country and takes the prompt
		string askCollege(string prompt);//function that asks the college and takes the prompt

		void present(string name, int age, string country, string college);//this functions takes all the parameters and presents them
};

//a base class that contains all the variables, that are defined in the functions.cpp
class Game {
public:
	int score = 0;
	int tries = 1;

	int user_guess;

	char answer;

	int* ptr_score = &score;//creating a pointer for a more flexible control of the memory
	int& ref_guess = user_guess;//creating a reference for a more flexible control of the memory

	int rand_number;
	void game();//game function, that's defined in the functions.cpp

}; class Child: public Game{ // child class, that gains all the fucntions of the base class, which is Game
};