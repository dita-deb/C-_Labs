/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: Lab6B
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned) time(0));
    int number;
    cout << "Enter a number between 1 and 1000: ";
    cin >> number;
    while (number < 0 || number>1000) {
        cout << "Invalid entry!";
        cout << "Enter a number between 1 and 1000: ";
        cin >> number;
    }
    int randomNumber = -1;
    int numberGuesses = 0;
    while (randomNumber != number) {
        randomNumber = (rand() % 1001);
        cout << "My guess was " << randomNumber << endl;
        numberGuesses++;
    }
    cout << "\nI guessed the number was " << number << " and it only took me " << numberGuesses << " guesses";
}
