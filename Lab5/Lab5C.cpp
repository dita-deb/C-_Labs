/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 5C
*/


#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;

	if ((x == 0) and (y == 0)) 
	{
		cout << "This point is the origin.";
	}
	else if ((x == 0) and (y < 0 or y>0))
	{
		cout << "This point is on the y axis.";
	}
	else if ((y == 0) and (x < 0 or x>0))
	{
		cout << "This point is on the x axis.";
	}
	else if ((x > 0) and (y > 0))
	{
		cout << "This point is in the first quadrant.";
	}
	else if ((x < 0) and (y > 0))
	{
		cout << "This point is in the second quadrant.";
	}
	else if ((x < 0) and (y < 0))
	{
		cout << "This point is in the third quadrant.";
	}
	else if ((x > 0) and (y < 0))
	{
		cout << "This point is in the fourth quadrant.";
	}
}
