/*
Class: CSE 1321L
Section: WE1 C++
Term: Spring 2021
Instructor: Samyuktha,Devi
Name: Anindita Deb
Lab#: Lab7B
*/

#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "Enter the number of GPAs: ";
	cin >> n;
	float array['n'];

	for (i = 0; i < n; i++)
	{
		//Asking for the GPAs
		cout << "GPA #"<<i <<": ";
		cin >> array[i];
	}

	for (i = 0; i < n; i++) 
	{
		if (array[i] >= 3.9 && array[i] <= 4)
			cout << "Student #" << i << ": Summa Cum Laude"<<endl;
		else if (array[i] >= 3.7 && array[i] < 3.9)
			cout << "Student #" << i << ": Magna Cum Laude"<<endl;
		else if (array[i] >= 3.5 && array[i] < 3.7)
			cout << "Student #" << i << ": Cum Laude"<<endl;
		else if (array[i] >= 2.0 && array[i] < 3.5)
			cout << "Student #" << i << ": Graduating"<<endl;
		else
			cout << "Student #" << i << ": Not Graduating"<<endl;
	}
}
