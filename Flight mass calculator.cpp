// Flight mass calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main() {
	double totalmass = 0;
	double mass = 0;

	cout << " Enter mass of your luggage" << endl;
	cin >> mass;

	while (mass != 0) {


		totalmass += mass;
		cout << " Enter mass of your  next item" << endl;
		cin >> mass;

	}
	if (totalmass <= 10000) {
		cout << " The total mass of your luggage is " << totalmass << "  Your luggage is allowed";

	}
	else {
		cout << " The total mass of your luggage is " << totalmass << "  Your luggage is not allowed";


	}


	return 0;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
