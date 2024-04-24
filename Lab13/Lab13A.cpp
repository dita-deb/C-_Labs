/*
Class: CSE 1321L
Section : WE1 C++
Term : Summer 2021
Instructor : Mokter Hossain
Name : Anindita Deb
Lab# : 13A
*/

#include <iostream>
using namespace std;

int main()
{
    int r=0, c=0, i=0, j=0;
    int num = 1;

    cout << "Please enter the number of rows: ";
    cin >> r;
    cout << "Please enter the number of columns: ";
    cin >> c;

    cout << "\nI have " << r << " rows and " << c << " columns. I need to fill-up " << (r*c) << " spaces.\n" << endl;

    int arr['r']['c'];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr[i][j] = num;

            num++;
        }
    }

    cout << "The " << r << "x" << c << " array:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << arr[i][j] << "|";
        }

        cout << endl;
    }
    return 0;
}
