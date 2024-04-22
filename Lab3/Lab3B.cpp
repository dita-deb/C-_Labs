/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain, Ph.D
Name: Anindita Deb
Lab#: Lab3B
*/

#include <iostream>
using namespace std;

int main() 
{
  //key Weighted: hour is 1.5, A-5, B-4, C-3, D-2, F-1 or 0
  //key Unweighted: hour is 1, A-4, B-3, C-2, D-1, F-0
  
  float c1, c2, c3, c4; //course hours
  float g1, g2, g3, g4; //grade 
cout <<"Course 1 hours: ";
cin >>c1;
cout <<"Grade for course 1: ";
cin >>g1;
cout <<"Course 2 hours: ";
cin >>c2;
cout <<"Grade for course 2: ";
cin >>g2;
cout <<"Course 3 hours: ";
cin >>c3;
cout <<"Grade for course 3: ";
cin >>g3;
cout <<"Course 4 hours: ";
cin >>c4;
cout <<"Grade for course 4: ";
cin >>g4;

float totHours, qualPoints, GPA;
totHours= c1+c2+c3+c4;
qualPoints=(c1*g1)+(c2*g2)+(c3*g3)+(c4*g4);
GPA= qualPoints/totHours;

cout<<"Total hours is: " <<totHours<< endl;
cout<<"Total quality points is: " <<qualPoints<<endl;
cout<<"Your GPA for this semester is "<<GPA<<endl;
}
