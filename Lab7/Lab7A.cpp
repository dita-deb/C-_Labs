/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: Lab 7A-1 
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
