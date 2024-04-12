/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 5B
*/

#include <iostream>
using namespace std;

int main()
{
	int integer;
	cout << "Enter an integer: ";
	cin >> integer;
    // Divide number by modulus 2
    switch (integer % 2)
    {
        // If remainder=0
    case 0:
        // Integer is divisible by 2
        cout<<"This number is divided by 2";
        break;

        // If remainder=/=0
    default:

        // Divide number by modulus 3
        switch (integer % 3)
        {
            // If remainder=0
        case 0:

            // Integer is divisible by 3
            cout<<"This number is divisible by 3";
            break;

            // If remainder=/= 0   
        default:

            // Divide number by modulus 5
            switch (integer % 5)
            {
                // If remainder=0
            case 0:

                // Integer is divisible by 5
                cout<<"This number is divisible by 5";
                break;

                // If remainder=/=0
            default:

                // Number is undetermined
                cout<<"This number is undetermined";
                break;
            }
            break;
        }
        break;
    }
}
