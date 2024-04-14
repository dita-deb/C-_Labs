/*
Class: CSE 1321L
Section: WE1 C++
Term: Spring 2021
Instructor: Samyuktha,Devi
Name: Anindita Deb
Lab#: Lab7A
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array['n'];

    for (i = 0; i < n; i++) {
        array[i] = i * i;
    }

    for (i = 0; i < n; i++) {
        cout << "|" << array[i];
    }
}
