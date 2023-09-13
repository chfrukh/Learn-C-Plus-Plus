#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to find the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add() function to add the numbers
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    // Input a number for factorial calculation
    cout << "Enter a number to calculate its factorial: ";
    cin >> num1;

    // Call the factorial() function to find the factorial
    int fact = factorial(num1);
    cout << "Factorial: " << fact << endl;

    return 0;
}
