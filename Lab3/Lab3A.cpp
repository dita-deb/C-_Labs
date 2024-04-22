/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain, Ph.D
Name: Anindita Deb
Lab#: Lab3A
*/

#include <iostream>
using namespace std;

int main()
 {
  //CREATE amountOwed
  float amountOwed;
  //ask for amountOwed
  cout <<"Amount owed: $";
  //READ user input for amountOwed
  cin >> amountOwed;
  //CREATE APR (annual precentage rate)
  float APR;
  //Ask for APR value:
  cout <<"Enter APR: ";
  //READ APR
  cin >> APR;

   //CREATE minimum payment
  float minimumPayment;
  //DEFINE minimumPayment
  minimumPayment=(amountOwed*APR)/12;

  //CREATE MPR (monthly percentage rate)
  float MPR;
  //DEFINE MPR as (APR/12mth) /100
  MPR=(APR)/12.0000;

  //Display MPR and minimumPayment
    cout <<"Monthly percentage rate: " <<MPR<< endl;
    cout <<"Minimum payment: $" <<minimumPayment/100.0000<< endl;
  //END MAIN
}
