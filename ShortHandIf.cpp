#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Please Enter age: ";
    cin>>age;
    string message=(age>=4)?"Admit to School.":"Declined! Minimum age not reached.";
    cout<<message;
    return 0;
}