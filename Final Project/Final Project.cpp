#include "Header.h"

int main()
{
	Info info;//creating an object of the Info class to perform actions in the main

	Child child;//creating an object of a child class, which inherits all the parameters and functions of the base class

	cout << "Welcome to an awesome play testing of C++ Functionality! \n";
	cout << "Let's start with something simple. \n";

	//prompts
	string name = info.askName("What's your name?\n");
	int age = info.askAge("How old are you ? \n");
	string country = info.askCountry("Where are you from?\n");
	string college = info.askCollege("What college/univerity are you attending?\n");

	//intializing of present function, takes the parameters in and prints them out
	info.present(name, age, country, college);

	cout << "\n\n"; 

	//initializing the game function, that plays the game
	child.game();

	cout << name << " ,do you want to play again? Y/N: ";
	cin >> child.answer;

	//takes the user input and asks the question. the loop runs while the answer is Y
	while (child.answer == 'Y') {
		//tries qunatity reset
		child.tries = 1;
		child.game();
	}

	if (child.answer == 'N') {
		cout << "Thank you for playtesting my C++ Functionality app, " << name << "!";
	}
	return 0;
}
