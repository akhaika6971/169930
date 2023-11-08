#include<iostream>
using namespace std;
int main()
{
int Late_fee, Days;
string Book_type;
cout<<"Book types: Reference, Childrens and Regular.\n";
cout<<"Enter book type borrowed: ";
getline(cin,Book_type); 
if(Book_type =="Reference"){         //1st if block
    cout<<"Days since return date: ";            
    cin>>Days;
    if(Days>=1&&Days<=5){                     //nested if else in if block
    Late_fee = 200*Days;
    cout<<"Your fine is Ksh= "<<Late_fee<<endl;}
    if(Days>=6)
    {
        Late_fee = 300*Days;
        cout<<"Your fine is Ksh= "<<Late_fee<<endl;
    }
    else{
        cout<<"Check that you have entered the right details.";
    }
}
else if(Book_type =="Childrens"){
    cout<<"Days since return date: ";
    cin>>Days;
    if(Days>=1&&Days<=5){                         //nested if else in else if
    Late_fee = 100*Days;
    cout<<"Your fine is Ksh= "<<Late_fee<<endl;}
    if(Days>=6)
    { 
        Late_fee = 200*Days;
        cout<<"Your fine is Ksh= "<<Late_fee<<endl;
    }
    else{
        cout<<"Check that you have entered correct details.";
    }
}
else if(Book_type == "Regular"){
    cout<<"Days since return date: ";
    cin>>Days;
    if(Days>1&&Days<=5){
    Late_fee = 150*Days;
    cout<<"Your fine is Ksh= "<<Late_fee<<endl;}
    if(Days>=6)
    {
        Late_fee = 250*Days;
        cout<<"Your fine is Ksh= "<<Late_fee<<endl;
    }
    else{
        cout<<"Check that you have entered the correct details";
    }
}
else{
    cout<<"Check that you have entered the correct details.";                // executed when the above conditions are met
}
return 0;
}