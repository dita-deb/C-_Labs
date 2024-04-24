/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 12B
*/

#include <iostream>
using namespace std;

class Lab12B {
};

int main()
{
	int arr1[6];
	int arr2[6];
	int sum[6];

	cout << "Please enter 5 integers for the first array: \n";
	for (int i = 1; i < 6; i++) {
		cout << "Integer " << i << ": ";
		cin >> arr1[i];
	}
	cout << "\nPlease enter 5 integers for the second array: \n";
	for (int i = 1; i < 6; i++) {
		cout << "Integer " << i << ": ";
		cin >> arr2[i];
	}
	cout << "The resulting sums are ";
	for (int i = 1; i < 6; i++) {
		sum[i]= arr1[i] + arr2[i];
		cout << sum[i]<<" ";
	}

}
