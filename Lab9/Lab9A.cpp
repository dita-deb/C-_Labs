/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 9A
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ch;
	int num;
	while (ch=="Yes") {
		cout << "Menu";
		cout << "\n0-Hello World";
		cout << "\n1-Goodbye Moon";
		cout << "\n2-Walking on Sunshine"<<endl;
		cout << "\nWhat would you like to do: ";
		cin >> num;
		if (num == 0) {
			cout << "\nHello!\n";
		}
		else if (num == 1) {
			cout << "\nOk,bye.\n";
		}
		else if (num == 2) {
			cout << "\nWHOA!\n";
		}

		cout << "Type ""Yes"" to rerun. ";
		cin>>ch;
	}
		cout << "Program Ends";

}
