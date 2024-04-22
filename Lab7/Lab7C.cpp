/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: Lab7C-1
*/

#include <iostream>
using namespace std;
int main()
{
	int s; //size
	cout << "Enter the size of the arrays: ";
	cin >> s;

	int array1['s'];
	int array2['s'];

	//loop for the array variables for array1 and array2
	for (int i = 0; i < s; i++)
	{
		cout << "Enter array 1 slot " << i << ": "; //taking input in array1;
		cin >> array1[i];
		cout << "Enter array 2 slot " << i << ": "; //taking input in array 2;
		cin >> array2[i];
	}

	//now to compare each array by checking array variables if they are equal
	int check=1; 
	for (int i = 0; i < s; i++)
	{
		if (array1[i] != array2[i])
		{
			check = 0;
			break; //break if any element is not identical
		}
	}
	if (check == 0)
		cout << "The arrays are not identical";
	else
		cout << "The arrays are identical";
}
