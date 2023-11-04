#include<iostream>
using namespace std;
int main()
{
    string first_name, second_name;
    string course;
    float score;
    cout<<"Enter First name: ";
    cin>>first_name;
    cout<<"Enter second name: ";
    cin>>second_name;
    cout<<"Enter course: ";
    cin>>course;
    cout <<"Enter score: ";
    cin>>score;
    if(score>= 70){
        cout<<first_name << second_name<<" Your grade is an 'A'.";
    }
    else if(score>=60&&score<=69){
        cout<<first_name << second_name<<" Your grade is 'B'.";
    }
   else if(score>=50&&score<=59){
    cout<<first_name << second_name<<" Your grade is 'C'.";
   }
   else if(score>=40&&score<=49){
    cout<<first_name << second_name<<" Your grade is 'C'";
   }
   else if(score<40){
    cout<<first_name << second_name<<" Your grade is 'D'.";
   }
   else{
    cout<<"Invalid score.";
   }
}