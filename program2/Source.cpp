#include <iostream>

using namespace std;

int main() {

    double x, y;


    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    //pointer variables
    double* ptrX = &x;
    double* ptrY = &y;

    //adding x and y with the pointers
    double sum = *ptrX + *ptrY;


    cout << "Value of x: " << *ptrX << endl;
    cout << "Value of y: " << *ptrY << endl;
    cout << "Sum of x and y: " << sum << endl;

    return 0;
}
