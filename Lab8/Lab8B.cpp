/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 8B
*/

#include <iostream>
#include <string>
using namespace std;


bool isValid(double width, double height) {
    if (((double)width + (double)height) > 30.0) {
        return true;
    }
    else {
        return false;
    }
}

double Area(double width, double height) {
    return ((double)width * (double)height);
}

double Perimeter(double width, double height) {
    return (2.0 * ((double)width + (double)height));
}


int main() {

    double width, height;
    char c;

    do {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;

        if (isValid(width,height)) {
            cout << "This is valid rectangle\n";
            cout << "The area is: " << Area((double)width, (double)height) << endl;
            cout << "The perimeter is: " << Perimeter((double)width, (double)height) << endl;
        }
        else {
            cout << "This is invalid rectangle";
        }
        cout << "\nDo you want to enter another width and height (Y/N)?: ";
        cin >> c;
    } while (c == 'Y');
    cout << "Program Ends";
    
}
