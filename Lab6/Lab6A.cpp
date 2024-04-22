/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 6A
*/

#include <iostream>
using namespace std;
class Lab6A {
public:
	int findMax() {
		int number,largest=0;
		cout << "Please enter 10 numbers and this program will display the largest.\n"<<endl;
		for (int i=1; i <= 10; i++) {
			cout << "Please enter number " << i << ": ";
			cin >> number;
			if (number > largest) {
				largest = number;
			}
		}
		return largest;
	}
};
int main()
{
	Lab6A obj;
	int largest_integer;
	largest_integer = obj.findMax();
	cout << "\nThe largest number was " << largest_integer;
}
