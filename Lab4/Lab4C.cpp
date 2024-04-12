/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 4C
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int choice;
    cout << "Welcome!\n";
    cout << "Please input a number";
    cin >> num;

    cout << "\nWhat would you like to do to this number:\n";
    cout << "0- Get the additive inverse of the number\n";
    cout << "1- Get the reciprocal of the number\n";
    cout << "2- Square the number\n";
    cout << "3- Cube the number\n";
    cout << "4- Exit the program\n";
    cout << endl;
    cin >> choice;
    cout<<endl;

    switch (choice) {

        case 0:
            cout << "The additive inverse of " << (float)num << " is " << (float)(-1.00 * (float)num);
            break;
        case 1:
            cout << "The reciprocal of " << num << " is " << (float)(1.0 / (float)num);
            break;
        case 2:
            cout << "The square of " << num << " is " << num * num;
            break;
        case 3:
            cout << "The cube of " << num << " is " << (num * num * num);
            break;
        case 4:
            cout << "Thank you, goodbye!";
            break;
        default:
            cout << "Invalid input, please try again!";
            break;
    }
}
