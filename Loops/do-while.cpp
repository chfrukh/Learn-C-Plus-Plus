#include <iostream>
using namespace std;

int main() {
    int i = 1; // Initialize the loop control variable

    // Use a do-while loop to print numbers from 1 to 10
    do {
        cout << i << " ";
        i++; // Increment the loop control variable
    } while (i <= 10);

    cout << endl; // Print a newline to separate the output

    return 0;
}
