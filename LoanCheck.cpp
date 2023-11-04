#include<iostream>
using namespace std;
int main(){
int age;
string name;
string status;
float bank_balance;
int customer_period;
 cout<<"Enter name: ";
 cin>>name;
 cout<<"Enter age:";
 cin>>age;
 cout<<"Enter status:";
 cin>>status;
 cout<<"Enter bank_balance: ";
 cin>> bank_balance;
 cout<<"Enter period: ";
 cin>>customer_period;
 if(age>22&&status=="good"&&bank_balance>50000&&customer_period>6)
 {
    cout<<"Qualified";
 }
else{
    cout<<"Not qualified";
}
 return 0;


}
