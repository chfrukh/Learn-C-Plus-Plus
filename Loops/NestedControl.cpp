#include <iostream>
using namespace std;

int main() {
    // Use a nested for loop to create a multiplication table
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            // Calculate and print the product of i and j
            int product = i * j;
            cout << i << " x " << j << " = " << product << "\t";
        }
        cout << endl; // Move to the next row of the table
    }

    return 0;
}
