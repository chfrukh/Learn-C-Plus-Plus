#include <iostream>
#include <cmath> // Include the <cmath> header for mathematical functions

using namespace std;

int main() {
    // Addition (+)
    int a = 5;
    int b = 3;
    int additionResult = a + b;
    cout << "Addition: " << additionResult << endl;

    // Subtraction (-)
    int subtractionResult = a - b;
    cout << "Subtraction: " << subtractionResult << endl;

    // Multiplication (*)
    int multiplicationResult = a * b;
    cout << "Multiplication: " << multiplicationResult << endl;

    // Division (/)
    double divisionResult = static_cast<double>(a) / b; // Cast to double for precise division
    cout << "Division: " << divisionResult << endl;

    // Modulus (%)
    int modulusResult = a % b;
    cout << "Modulus: " << modulusResult << endl;

    // Exponentiation (using pow from <cmath>)
    double base = 2.0;
    double exponent = 3.0;
    double exponentiationResult = pow(base, exponent);
    cout << "Exponentiation: " << exponentiationResult << endl;

    // Square Root (using sqrt from <cmath>)
    double number = 25.0;
    double squareRootResult = sqrt(number);
    cout << "Square Root: " << squareRootResult << endl;

    return 0;
}
