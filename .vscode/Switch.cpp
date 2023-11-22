#include <iostream>
using namespace std;

int main() {
    // Displaying the restaurant menu
    cout << "Welcome to our restaurant!" << endl;
    cout << "Menu:" << endl;
    cout << "1. Chicken Combo - $18" << endl;
    cout << "2. Twisters Combo - $8" << endl;
    cout << "3. Pasta Combo - $11" << endl;

    // Getting the user's choice
    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Determining the selected food items and their costs
    string food_Item;
    double cost;
    switch (choice) {
        case 1:
            food_Item = "Chicken Combo";
            cost = 10.0;
            break;
        case 2:
        
            food_Item = "Twisters Combo";
            cost = 12.0;
            break;
        case 3:
            food_Item = "Pasta Combo";
            cost = 8.0;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    // Displaying the selected food items and total bill
    cout << "You have selected: " << food_Item << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Total bill: $" << cost << endl;

 return 0;
}