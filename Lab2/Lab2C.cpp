/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain, Ph.D
Name: Anindita Deb
Lab#: Lab2C
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height, area, perimeter;

    cout << "Enter a width: ";
    cin >> width;
    cout << "Enter a height: ";
    cin >> height;

    area = width * height;
    perimeter = 2 * (width + height);
        cout << "The area is " << area << endl;
        cout << "The perimeter is " << perimeter << endl;
}
