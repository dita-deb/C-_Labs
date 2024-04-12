/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 4A
*/

#include <iostream>
using namespace std;

int main()
{
    float score;
    cout << "Enter the score of your exam: ";
    cin >> score;

    if (score <= 100 && score > 97)
    {
        cout <<"Letter grade is A+";
    }
    else if (score <= 97 && score > 94)
    {
        cout << "Letter grade is: A";
    }
    else if (score <= 94 && score > 91)
    {
        cout << "Letter grade is: A-";
    }
    else if (score <= 91 && score > 88)
    {
        cout << "Letter grade is: B+";
    }
    else if (score <= 88 && score > 85)
    {
        cout << "Letter grade is: B";
    }
    else if (score <= 85 && score > 82)
    {
        cout << "Letter grade is: B-";
    }
    else if (score <= 82 && score > 79)
    {
        cout << "Letter grade is: C+";
    }
    else if (score <= 79 && score > 76)
    {
        cout << "Letter grade is: C";
    }
    else if (score <= 76 && score > 73)
    {
        cout << "Letter grade is: C-";
    }
    else if (score <= 73 && score > 70)
    {
        cout << "Letter grade is: D+";
    }
    else if (score <= 70 && score > 67)
    {
        cout << "Letter grade is: D";
    }
    else if (score <= 67 && score > 64)
    {
        cout << "Letter grade is: D-";
    }
    else
    {
        cout << "Letter grade is: F";
    }
}
