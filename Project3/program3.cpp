#include <iostream>

using namespace std;

// Define type aliases
typedef int* VEC;      // VEC is an alias for a pointer to an int
typedef VEC* MATRIX;   // MATRIX is an alias for a pointer to a VEC

int main() {
    // Variable definition
    int a = 5;

    // Create a VEC pointer that points to a
    VEC v = &a;    

    
    MATRIX m = &v; 

    // Display the value of a using v and m
    cout << "Value of a using v: " << *v << endl;
    cout << "Value of a using m: " << **m << endl;

    return 0;
}
