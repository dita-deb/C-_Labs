/*
Class: CSE 1321L
Section: WE1 C++
Term: Spring 2021
Instructor: Samyuktha,Devi
Name: Anindita Deb
Lab#: Lab6A
*/

#include <iostream>
using namespace std;

int main()
{
	int start;
	int end;
	cout << "Enter a starting number: ";
	cin >> start;
	cout << "Enter an ending number: ";
	cin >> end;

	int sum = 0;

	if (start < end) {
		for (int i = start; i <= end; i++) {
			if (i % 2 != 0) {
				sum += i;
			}
		}
	}if (start > end) {
		for (int i = start; i >= end; i--) {
			if (i % 2 != 0) {
				sum += i;
			}
		}
	}
	cout << "Sum of odds is: " << sum << end;;

}  
