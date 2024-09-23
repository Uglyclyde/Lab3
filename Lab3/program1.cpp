#include <iostream>


// Declare the variables as extern
extern int purchaseAmount;
extern  int DOLLAR;
extern  int QUARTER;
extern int DIME;
extern int NICKEL;
extern int PENNY;

using namespace std;

int main() {
    cout << "Enter the purchase amount (in pennies, up to 100): ";
    cin >> purchaseAmount;

    if (purchaseAmount < 0 || purchaseAmount > 100) {
        cout << "Invalid input! The amount must be between 0 and 100." << endl;
        return 1;
    }

    int change = DOLLAR - purchaseAmount;
    //cout << change;

    int quarters = change / QUARTER;
    change %= QUARTER;

    int dimes = change / DIME;
    change %= DIME;

    int nickels = change / NICKEL;
    change %= NICKEL;

    int pennies = change / PENNY;

    cout << "Your change is:" << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
