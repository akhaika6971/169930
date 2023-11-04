#include <iostream>
using namespace std;
int main()
{
    int age;
    string interest, interest2;
    cout<<"Please neter the child's age: ";
    cin>>age;
    if (age>=4&&age<10)
    {cout<<"Please enter the interest: ";
    cin>>interest;
    if(interest =="Soccer")
    {cout<<"Admit and asssign to Soccer play group";}
    if(interest=="art")
    {cout<<"Admit and assign to Art group";}
    else{
        cout<<"Admit to other group";
    }}
    else {
        cout<< "Admission unsuccessful. Age is invalid";
    }
    return 0;
}