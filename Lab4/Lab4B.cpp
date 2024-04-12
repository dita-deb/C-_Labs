/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 4B
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    cout << "Enter the day: ";
    cin >> day;

    if ((day == "monday" || day=="Monday")||(day == "wednesday" || day=="Wednesday"))
    {
        cout << "I have class today!";
    }
    else if (day == "friday" || day=="Friday")
    {
        cout << "It's Friday! Friday! Gotta get down on Friday!";
    }
    else
    {
        cout << "I should use this time to do my homework.";
    }
}
