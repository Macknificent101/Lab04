#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	// I recommend writing your factorial code here
	int length;
	int result;
	result = 1;
	cout << "Please enter a positive integer: ";
	cin >> length;
	if (length < 1) {
		cout << "I said POSITIVE." << endl;
		factorial();
	}
	else {
		cout << length << "! = 1";
		for (int i = 2; i <= length; i++) {
			cout << " * " << i;
			result = result * i;
		}
		cout << " = " << result << endl;
	}
}

void arithmetic() {
	// I recommend writing your arithmetic series code here
	int length;
	int start;
	int interval;
	int result;
	result = 1;
	cout << "Please enter a starting number: ";
	cin >> start;
	cout << "Please enter a number to add each time: ";
	cin >> interval;
	cout << "Please enter how many times you want to iterate: ";
	cin >> length;
	if (length < 1) {
		cout << "that has to be positive." << endl;
		arithmetic();
	}
	else {
		cout << start;
		for (int i = 1; i < length; i++) {
			cout << " + " << (start + (i * interval));
			result = result + (start + (i * interval));
		}
		cout << " = " << result << endl;
	}
}

void geometric() {
	// I recommend writing your geometric series code here
	int length;
	int start;
	int interval;
	int result;
	result = 1;
	cout << "Please enter a starting number: ";
	cin >> start;
	cout << "Please enter a number to multiply by each time: ";
	cin >> interval;
	cout << "Please enter how many times you want to iterate: ";
	cin >> length;
	if (length < 1) {
		cout << "that has to be positive." << endl;
		arithmetic();
	}
	else {
		cout << start;
		for (int i = 1; i < length; i++) {
			cout << " + " << (start * (interval ^ i));
			result = result + (start * (interval ^ i));
		}
		cout << " = " << result << endl;
	}
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
			cout << "FACTORIAL" << endl;
			factorial();
		}
		else if (choice == 2) {
			cout << "ARITHMETIC" << endl;
			arithmetic();
		}
		else if (choice == 3) {
			cout << "GEOMETRIC" << endl;
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}