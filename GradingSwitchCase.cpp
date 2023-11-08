#include <iostream>
using namespace std;
int main()
{
    string First_name, Second_name,Course;
    int Score;
    cout<<"Enter frist name: ";
    cin>>First_name;
    cout<<"Enter second name: ";
    cin>>Second_name;
    cout<<"Enter course: ";
    cin>>Course;
    cout<<"Enter score(Between 0-100): ";//prompt user for score input.Program is for score between 0 to 100
    cin>>Score;
    switch(Score/10){   //score divided by 10. all variatiosn of 80, 60 etc, divide by 10 give a number between 1-10 even with a reminder so it meets the conditions
        case 10:
        case 8:
        case 7:
        cout<<"Your grade is an 'A'.";
        break;
        case 6:
        cout<<"Your grade is 'B'.";
        break;
        case 5:
        cout<<"Your grade is 'C'.";
        break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        cout<<"Your grade is 'D'";
        break;
        default:
        cout<<"Invalid score.";
    }
}