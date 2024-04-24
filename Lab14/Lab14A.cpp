/*
Class: CSE 1321L
Section : WE1 C++
Term : Summer 2021
Instructor : Mokter Hossain
Name : Anindita Deb
Lab# : 14A
*/

#include <iostream>
using namespace std;


    int search(int*, int, int);

    int main()
    {
        int x[100], find, y, value;

        cout << "Enter 10 numbers: ";

        for (y = 0; y < 10; y++) {
            cin >> x[y];
        }

        cout << "What is the target number: ";
        cin >> find;

        value = search(x, y,find);

        if (value == -1)
            cout << "The target is not in the set.";
        else
            cout << "The target is in the set.";

        return 0;
    }

    int search(int* poin, int b, int f)
    {
        int z;

        for (z = 0; z < b; z++)
        {
            if (*(poin + z) == f)
                return z;
        }

        return -1;
    }

