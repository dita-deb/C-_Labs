/*
Class: CSE 1321L
Section: WE1 C++
Term: Spring 2021
Instructor: Samyuktha,Devi
Name: Anindita Deb
Lab#: Lab6B
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    int num, num2;
    int min;
    int max;
    min = -1000;
    max = 1000;
    while (min = !max) {
        cout << "Enter a number between -1000 and +1000: ";
        cin >> num,num2;
        cout << "Min is " << num << endl;
        cout << "Max is " << num << endl;
        if (num < num2) {
            cout << "Min is " << num2 << endl;
            cout << "Max is " << num << endl;
        }
        if (num < num2) {
            cout << "Min is " << num2 << endl;
            cout << "Max is " << num << endl;
        }
    }
}


/*(
int num = 0;
int num2 = 0;
int ans;

cout << "Enter a number between -1000 and +1000: ";

while (((num <1000 || num>-1000) and ((num2 < 1000) || (num2 > -1000))) {
    cin >> ans;
}
if (num2 < num) {
    cout << "Min is " << num2 << endl;
    cout << "Max is " << num << endl;
}
else if (num < num2) {
    cout << "Min is " << num2 << endl;
    cout << "Max is " << num << endl;
}
)*/
