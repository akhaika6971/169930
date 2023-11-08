#include<iostream>
using namespace std;
int main(){
int Age;
string Name;
string Status;
float Bank_balance;
int Customer_period;
 cout<<"Enter name: ";
 cin>>Name;
 cout<<"Enter age:";
 cin>>Age;
 cout<<"Enter status:";
 cin>>Status;
 cout<<"Enter bank_balance: ";
 cin>> Bank_balance;
 cout<<"Enter period: ";
 cin>>Customer_period;
 if(Age>22&&Status=="good"&&Bank_balance>50000&&Customer_period>6)
 {
    cout<<"You qualify for a loan.";
 }
else{
    cout<<"You do not qualify for a loan.";
}
 return 0;
}
