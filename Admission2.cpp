#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"Please enter age: ";
cin>>age;
if(age>=7){
    cout<<"Admit to grade school."<<endl;
}
else if (age>=5&&age<=6)
{cout<<"Admit to kindergarten."<<endl;
}
else if(age>=3&&age<=4){
    cout<<"Admit to Pre-School"<<endl;
}
else if (age >=1&&age<=2){
cout<<"Admit to Play Group"<<endl;
}
else {
    cout<<"Reject";
    }
}
