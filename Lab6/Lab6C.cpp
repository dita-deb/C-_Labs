/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: Lab6C
*/



#include <iostream>
using namespace std;

int main()
{
	int num;
	char choice;
	int bal = 1000;
	int newBal, amount;


	cout << "Welcome!\nYou have $1000 in your account.\n";
	cout << "\nMenu \n0-Make a deposit \n1-Make a withdrawl \n2-Display account value";
	do {
		cout << "\nPlease make a selection: ";
		cin >> num;
		switch (num) {
		case 0:
			cout << "How much would you like to deposit?: ";
			cin >> amount;
			newBal = bal + amount;
			cout << "Your current balance is $" << newBal << "\n";
			cout << "Would you like to return to the main menu(Y / N)?: ";
			cin >> choice;
		case 1:
			cout << "How much would you like to withdraw?: ";
			cin >> amount;
			newBal = bal - amount;
			cout << "Your current balance is $" << newBal << "\n";
			cout << "Would you like to return to the main menu (Y/N)?: ";
			cin >> choice;
		case 2:
			cout << "Your current balance is $" << newBal << "\n";
			cout << "Would you like to return to the main menu (Y/N)?: ";
			cin >> choice;
			while (choice == 'N' || choice == 'n');
				cout << "Thank you for banking with us!";
			
		}
	}
}
