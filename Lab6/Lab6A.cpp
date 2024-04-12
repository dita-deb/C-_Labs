/*
Class: CSE 1321L
Section: WE1 C++
Term: Spring 2021
Instructor: Samyuktha,Devi
Name: Anindita Deb
Lab#: Lab6A
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ans;
    do {
        cout << "Gimme a cookie: ";
        getline(cin, ans);
    } while (ans!="cookie");
}
