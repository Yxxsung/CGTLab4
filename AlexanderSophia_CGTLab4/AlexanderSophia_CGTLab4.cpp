// Sophia Alexander
// CGT 215 Lab 4
//09/08/26

#include <iostream>

//introduces the standard namespace so that we can use cin and cout
using namespace std;

//This function shows the menu to the player when called, but does not hold the cin for the selection itself.
void PrintMenu() {
	cout << "Please Select which operation to perform:" << endl;
	//\t tabs the line over, creating an indent and endl ends the line like a carraige return on a typewriter
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}


void factorial() {
	// I recommend writing your factorial code here
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
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




