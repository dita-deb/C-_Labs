/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 5A
*/

#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Do you have a driving permit (Y/N)? ";
	char choice;
	cin >> choice;
	if (choice == 'N'){
		cout << "Driving permit is a prerequisite to purchase a vehicle!";
	}
	if (choice == 'Y') {
		cout << "Do you have a commercial driving license (Y/N)? ";
		char no;
		cin >> no;
		if (no == 'N') {
			cout << "Commercial driving license is a prerequisite to purchase a vehicle!";
		}
		else {
			cout << "Congratulations! You can purchase a vehicle, let's start talking options!";
		}
	}

}
