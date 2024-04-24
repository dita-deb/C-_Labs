
/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: Lab 10A 
*/

#include <iostream>
#include <string>
using namespace std;

class Chair {
    public:
    int numOfLegs;
    bool rolling;
    string material;
    
    Chair(int NumOfLegs, bool Rolling, string Material) {
    numOfLegs = NumOfLegs;
    rolling = Rolling;
    material = Material;
    }
};

int main()
{
    int NumOfLegs;
    bool Rolling;
    string Material;

    cout << "You are about to create a chair.\nHow many legs does your chair have: ";
    cin >> NumOfLegs;
    cout << "Is your chair rolling(true/false): ";
    cin >> Rolling;
    cout << "What is your chair made of: ";
    cin >> Material;

    Chair obj(NumOfLegs, Rolling, Material);
    cout << "\nYour chair has " << obj.numOfLegs << " legs, ";
    if (obj.rolling) {
        cout << "is rolling, ";
    }else {
        cout << "is not rolling, ";
    }
    cout << "and is made of " << obj.material << "." << endl;
    cout << "\nThis program is going to change that." << endl;

    obj.numOfLegs = 4;
    obj.rolling = false;
    obj.material = "wood";

    cout << "\nYour chair has " << obj.numOfLegs << " legs, ";
    if (obj.rolling) { cout << "is rolling, "; }
    else { cout << "is not rolling, "; }
    cout << "and is made of " << obj.material << "." << endl;

    return 0;
}
