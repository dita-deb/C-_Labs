/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 12A
*/

#include <iostream>
using namespace std;

class Lab12A{
};

int main()
{
	int arr[11];
	int sum = 0;

	cout << "Please enter 10 integers: \n";
	for (int i = 1; i < 11; i++) {
		cout << "Integer "<<i<< ": ";
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "The sum is " << sum << endl;
}
