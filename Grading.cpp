#include<iostream>
using namespace std;
int main()
{
    string First_name, Second_name;
    string Course;
    float Score;
    cout<<"Enter First name: ";
    cin>>First_name;
    cout<<"Enter Second name: ";
    cin>> Second_name;
    cout<<"Enter Course: ";
    cin>>Course;
    cout <<"Enter Score(Between 0-100): ";
    cin>>Score;
    if(Score>= 70){
        cout<<First_name << Second_name<<" Your grade is an 'A'.";//1st if block executed
    }
    else if(Score>=60&&Score<=69){
        cout<<First_name << Second_name<<" Your grade is 'B'."; //executed if the 1st condition is not met
    }
   else if(Score>=50&&Score<=59){
    cout<<First_name << Second_name<<" Your grade is 'C'.";
   }
   else if(Score>=40&&Score<=49){
    cout<<First_name << Second_name<<" Your grade is 'C'";
   }
   else if(Score<40){
    cout<<First_name << Second_name<<" Your grade is 'D'.";
   }
   else{                                                     //executed if none of the above conditions are met
    cout<<"Invalid Score.";
   }
}