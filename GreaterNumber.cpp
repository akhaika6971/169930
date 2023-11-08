#include <iostream>
using namespace std;
int main() {
    int Num1, Num2, Max;
    cout << "Enter the first number: ";
    cin >> Num1;
    cout << "Enter the second number: ";
    cin >> Num2;
    Max = (Num1 > Num2) ? Num1 : Num2;
    switch (Max) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "The maximum number is: "<< Max << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "The maximum number is: "<< Max << endl;
            break;
        default:
            cout << "The maximum number is: "<< Max << endl;
            break;
    }
    return 0;
}