#include <iostream>
#include "Iot.h" // Assuming "Iot.h" contains the declaration of the Iot class.

int main() {
    Iot a; // Create an object of the Iot class.

    int n;
    a.shape(4); // Call the shape() function with argument 4 to print a shape.
    
    // Prompt the user to enter a number.
    cout << "Enter a number for the table: ";
    cin >> n;
    
    // Call the table() function with the user-input number to print the multiplication table.
    a.table(n);

    return 0;
}
