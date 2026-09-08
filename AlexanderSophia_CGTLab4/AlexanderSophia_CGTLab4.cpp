// Sophia Alexander
// CGT 215 Lab 4
//09/08/26

#include <iostream>

//introduces the standard namespace so that we can use cin and cout
using namespace std;

//This function shows the menu to the player when called, but does not hold the cin for the selection itself.
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	//\t tabs the line over, creating an indent and endl ends the line like a carraige return on a typewriter
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}


//function takes an input from the user, verifies that it is positive, then finds the factorial value of that input
void factorial(int& fValue, int& result_1) {
	//&int is from the last lesson - it declares the variable that follows as a new integer so that we can use it later
	// the factorial of 5 is notated as 5!= 1 * 2 * 3 * 4 * 5 = 120.

	//This declares result as a longlong so that it can take 64 bits or 8 bytes. This enables the user to enter high values
	int result_1 = 1; //it wont let me define it, but I'm worried whatever it's initializing as is what's causing the weird output

	cout << "Please enter a POSITIVE number: ";
	cin >> fValue;

	//this if statement verifies that the input value is greater than 0. If it isn't, the statement will correct it.
	if (fValue < 0) {
		fValue = -fValue;
	}
	
	//this cout statement prints the initial script so only the numbers and stars need to be added later
	cout << "The result is: !" << fValue << "= ";

	//the for loop will loop through and multiply the numbers until it reaches the number that the user input at the beginning
	for (int i = 1; i <= fValue; ++i) {
		//the parameters read: Integer i = 1, run as long as i is less than or equal to fValue (user input), and add one to i each time you run

		//this cout statement prints the numbers as they're being multiplied so the user can see each number.
		cout << i << " * ";
		//when it prints, none of the i numbers are coming up negative.

		//the below line should take the result from the previous iteration and multiply it by the counter i until the loop ends
		result_1 = result_1 * i; //see if you can find the problem by doing the math manually. it must be how it's initializing

		//reversing the order of the previous two statements did nothing to help fix the wrong output problem. Where is the negative coming from??
	}

	//this prints out the final result at the end
	cout << " = " << result_1 << endl;

}

//function takes a starting value and the difference and adds the results. Ex: 3,5,7,9 has a start of 3 and a difference of 2
void arithmetic(int&aStart, int&aDiff, int&aSeriesL) {
	//the following lines prompt the user for the starting number, the difference between numbers, and the length of the series respectively
	cout << "Please enter the number you would like to start at: ";
	cin >> aStart;
	cout << endl << "Please enter the desired difference between the numbers: ";
	cin >> aDiff;
	cout << endl << "Please enter the desired length of the series: ";
	cin >> aSeriesL;
	
	//now we need to create a for loop that adds the numbers keeping in mind the starting number, difference and series length
	for (int i = 0; i < aSeriesL; i + aDiff) {

	}
}


//function
void geometric() {
	
}


int main() {
	
	//space for declaring variables
	int choice;
	char again;
	int fValue; //from Factorial function. Must be declared before use
	int result_1; //from Factorial function. Must be declared before use


	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(fValue, result_1);
			//factorial testing: 5 should output 120
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}




