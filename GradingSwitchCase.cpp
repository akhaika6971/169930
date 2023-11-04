#include <iostream>
using namespace std;
int main()
{
    string first_name, second_name,course;
    int score;
    cout<<"Enter frist name: ";
    cin>>first_name;
    cout<<"Enter second name: ";
    cin>>second_name;
    cout<<"Enter course: ";
    cin>>course;
    cout<<"Enter score: ";//prompt user for score input.Program is for score between 0 to 100
    cin>>score;
    switch(score/10){   //put score over 10 to work with smaller numbers. dividing 60-69(6) by 10 still gives 6 even if with remainders so you get the grading for 60
        case 10:
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
        cout<<"Your grade is 'D'";
        break;
        default:
        cout<<"Invalid";
    }
}