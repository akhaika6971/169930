#include<iostream>
using namespace std;

int main()
{
int num1,num2;
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;
switch(num1>num2){
case 0:
cout<<num2<<" is the greater number.";
break;
case 1:
cout<<num1<<" is the greater number.";
break;
default:
cout<<"Invalid.";
}

}