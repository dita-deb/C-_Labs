/*
Class: CSE 1321L
Section: WE1 C++
Term: Summer 2021
Instructor: Mokter Hossain, Ph.D
Name: Anindita Deb
Lab#: Lab3C
*/
#include <iostream>
using namespace std;

int main() 
{
  int q,d,n,p; //quarters(q),dimes(d),nickles(n),pennies(p)
cout<<"Enter the number of quarters: ";
cin >>q;
cout<<"Enter the number of dimes: ";
cin >>d;
cout<<"Enter the number of nickles: ";
cin >>n;
cout<<"Enter the number of pennies: ";
cin >>p;

// \n for the space between
cout<<"\nYou entered " <<q<< " quarters."<<endl;
cout<<"You entered "<<d<<" dimes."<<endl;
cout<<"You entered "<<n<<" nickles."<<endl;
cout<<"You entered "<<p<<" pennies."<<endl;

float qval,dval,nval,pval;
//define value of each coin
qval=(q*0.25);
dval=(d*0.10);
nval=(n*0.05);
pval=(p*0.01);

double dollar,change;
dollar=(int)(qval+dval+nval+pval);
change=(((qval+dval+nval+pval)-(int)dollar))*100;

cout<<"\nYour total is "<<dollar<<" dollars and "<<change<<" cents."<<endl;

}
