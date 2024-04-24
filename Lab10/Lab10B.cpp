/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain
Name: Anindita Deb
Lab#: 10B
*/

#include <iostream>
#include <string>
using namespace std;

class Dog{
public:
int age;
double weight;
string name;
string furColor;
string breed;

void bark() { 
    cout << "Woof! Woof!\n"; 
}

void rename(string n) {
    name = n; 
}

void eat(double w) { 
    weight += w; 
}
};


int main()
{
    double x;
    string newName;

    cout << "You are about to create a dog" << endl;
    Dog d;

    cout << "How old is the dog: ";
    cin >> d.age;
    cout << "How much does the dog weigh: ";
    cin >> d.weight;
    cout << "What is the dog's name: ";
    cin >> d.name;
    cout << "What color is the dog: ";
    cin >> d.furColor;
    cout << "What breed is the dog: ";
    cin >> d.breed;

    cout << d.name << " is a " << d.age << " year old " << d.furColor << " " << d.breed << " that weighs " << d.weight << " lbs." << endl;
    d.bark();
    cout << d.name << " is hungry, how much should he eat: ";
    cin >> x;
    d.eat(x);
    cout << d.name << " isn't a very good name." << endl;
    cout << "What should they be renamed to: ";
    cin >> newName;
    d.rename(newName);

    cout << d.name << " is a " << d.age << " year old " << d.furColor << " " << d.breed << " that weighs " << d.weight << " lbs." << endl;

    return 0;
}
