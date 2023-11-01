#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Please Enter the age: ";
    cin>> age;
    if(age>=4){
        cout<<"Admit to school"<<endl;
    }
    else{
        cout<<"Declined! Minimum Age not Reached"<<endl;
    }
    return 0;
}
