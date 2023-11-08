/* #include <iostream>
#include <string>
using namespace std;

int main() {
    string bookType;
    int dayslate;
    double fine = 0.0;

    // Enter the type of book
    cout << "Enter the type of book (Mathematics or Spanish): ";
    cin >> bookType;
    
    // Check the type of book and calculate the late fee
    if (bookType == "Mathematics") {
        cout << "Enter the number of days late: ";
        cin >> dayslate;

        if (dayslate <= 30) {
            fine = dayslate * 10.00; // Ksh.10.00 per day for Mathematics books, up to 30 days
        } else {
            fine = 30 * 10.00 + (dayslate - 30) * 15.00; // Ksh.15.00 per day for further delay
        }
    } else if (bookType == "Spanish") {
        cout << "Enter the number of days late: ";
        cin >> dayslate;

        if (dayslate <= 30) {
            fine = dayslate * 5.00; // Ksh.5.00 per day for Spanish books, up to 30 days
        } else {
            fine = 30 * 5.00 + (dayslate - 30) * 10.00; // Ksh.10.00 per day for further delay
        }
    } else {
        cout << "Invalid book type inputed." << endl;
    }

    cout << "Fine for the book: " << fine << " Ksh." << endl;

    return 0;
} */

/* #include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int grade=0;
    char agg;
    cout<<"enter the name of the student";
    cin>>name;
    cout<<"enter the score scored by the student";
    cin>>grade;

    switch(grade){
      
        case(1): 
        grade>=70;
        agg="A";

        cout<<"the student by the name "<<name<<"scored "<<grade<< "and has an "<<agg<<;

        case grade>=60||grade<=69:
        agg="B"

        cout<<"the student by the name "<<name<<"scored "<<grade<< "and has an "<<agg<<;

        case grade>=50||grade<=59:
        agg="C"

        cout<<"the student by the name "<<name<<"scored "<<grade<< "and has an "<<agg<<;

        case grade<=40:
        agg="F"
      cout<<"the student by the name "<<name<<"scored "<<grade<< "and has an "<<agg<<;
}
default:
cout<<"enter valid marks";
} */

/* #include <iostream>
using namespace std;

int main() {
    string name;
    int grade = 0;
    char agg = ' ';

    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the score scored by the student: ";
    cin >> grade;

    switch (grade / 10) {
        case 7:
            agg = 'A';
            break;
        case 6:
            agg = 'B';
            break;
        case 5:
            agg = 'C';
            break;
        case 4:
            agg = 'F';
            break;
            cout << "The student by the name " << name << " scored " << grade << " and has an " << agg << endl;
        default:
            cout << "Invalid grade." << endl;
            //return 1; // Exit with an error code
             //cout << "The student by the name " << name << " scored " << grade << " and has an " << agg << endl;
    }
        
    cout << "The student by the name " << name << " scored " << grade << " and has an " << agg << endl;
    return 0;
} */


#include <iostream>
using namespace std;

int main() {
    int num1, num2, max;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    max = (num1 > num2) ? num1 : num2;

    switch (max) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "The maximum number is: "<< max << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "The maximum number is: "<< max << endl;
            break;
        default:
            cout << "The maximum number is: "<< max << endl;
            break;
    }

    return 0;
}