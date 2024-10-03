// LairAccessControl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void displayDoorOpening() {
    cout << R"(
         ______
        |      |
        |      |
        |  O   |   <-- Door is closed
        |      |
        |______|
    
    Pressing the blue button... Door is opening...
    
         ______
        |      |
        |      |
        |      |    <-- Door is open
        |      |
        |______|

    )" << endl;
}

void displayKaboom() {
	cout << R"(
        _.-^^---....,,--
    _--                  --_
   <                        >)
   |                         |
    \._                   _./
       ```--. . , ; .--'''
             | |   |
          .-=||  | |=-.
          `-=#$%&%$#=-'
             | ;  :|
    _____.,-#%&$@%#&#~,._____
            KABOOM!!!
    )" << endl;
}

int main() {
	// Step 1: Press the orange button on the contril desk to view the vistor on the screen
	cout << "Pressing the orange button on to view the vistor on the screen..." << endl;

	// Step 2: Ask the visitor for the password
	string visitorPassword;
	string secretPassword = "OpenSesame"; //The secret password
	cout << "Please enter the password: ";
	cin >> visitorPassword;

	//Step 3: Check of the visitor's password matches the secret password
	if (visitorPassword == secretPassword) {
		// Step 3a: Press the blue button to open the door and say "Welcome"
		cout << "Pressing the blue button to open the door..." << endl;
		displayDoorOpening();
		cout << "Welcome!" << endl;
	}
	else {
		// Step 3b: Say "Sorry, you are wrong" and press the big red button to destroy the visitor
		cout << "Sorry, you are wrong." << endl;
		cout << "You must die now..." << endl;
		cout << "Pressing the big red button to destroy the visitor..." << endl;
		displayKaboom(); // Display "Kaboom" illustration 
	}

	return 0;
}