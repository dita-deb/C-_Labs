/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 8A
*/

#include <iostream>
using namespace std;


int max(int x, int y) {
    int result = x;
    if (y > result) result = y;
    return result;
}

int min(int x, int y) {
    int result = x;
    if (y < result) result = y;
    return result;
}

float average(double x, double y) {
    double res = ((double)x + (double)y) / (2.0);
    return res;
}

int main() {
    float x, y;
    cout << "Enter number 1: ";
    cin >> x;
    cout << "Enter number 2: ";
    cin >> y;
    cout << "Min is " << min(x, y) << endl;
    cout << "Max is " << max(x, y) << endl;
    cout << "Average is " << average(x, y) << endl;
    return 0;
}
