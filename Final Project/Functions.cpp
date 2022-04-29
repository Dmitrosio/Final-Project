#include "Header.h"

//string function that takes in the prompt and returns the string value of the user
string Info::askName(string prompt) {
	string name;
	cout << prompt;
	cin >> name;
	return name;
}

//int function that takes in the prompt and returns the age of the user
int Info::askAge(string prompt) {
	int age;
	cout << prompt;
	cin >> age;
	return age;
}

//string function that takes in the prompt and returns the country where the user is from
string Info::askCountry(string prompt) {
	string country;
	cout << prompt;
	cin >> country;
	return country;
}

//string function that takes in the prompt and returns the college the user is attending
string Info::askCollege(string prompt) {
	string college;
	cout << prompt;
	cin >> college;
	return college;
}

//this function prints takes all the parameters that the user put in and prints them out
void Info::present(string name, int age, string country, string college) {
	cout << "Some information that we got from you: \n Your name is " << name << ". \n You're " << age << " old. \n You are from " << country << ". \n You're currently attending " << college << ".\n";

	if (college == "UAT" || "Uat" || "uat") {
		cout << "Dude... really?";
	}
}

//this is a function called game, that is the part of Game class in header file
void Game::game() {
	srand(time(0)); //important reference in order for random numbers to be created

	cout << "Do you want to play a game? Y/N: ";
	cin >> answer;

	//condition that checks user answer
	if (answer == 'Y') {
		//use of a do while loop
		do {
			//creates a random number between 0 and 5
			rand_number = rand() % 5;
			cout << "Guess the number from 0 to 5: " << "\n";
			cout << "Current Attempt: " << tries << ". Attempts left: " << 6 - tries << ".\n";
			cin >> ref_guess; 

			//condition that checks if the user guess equals random number
			if (ref_guess == rand_number) {
				score++;//increments the score everytime when the guess is correct
				cout << "The number was: " << rand_number << "\n";
				cout << "Your answer was: " << ref_guess << "\n";
				cout << "Good job! You get one point for the right guess and now your score is: " << *ptr_score << "\n\n";
				tries++;//icrements the qunatity of tries
			}

			else {
				score--;//decrements the score if the yser guess is wrong
				cout << "The number was: " << rand_number << "\n";
				cout << "Your answer was: " << ref_guess << "\n";
				cout << "Sadly your guess is wrong and now you lose one point. Your score now is: " << *ptr_score << "\n\n";
				tries++;
			}

		} while (answer == 'Y' && tries != 6); //loop is running as long as answer is correct and if number of tries is not equal 6
	}
}