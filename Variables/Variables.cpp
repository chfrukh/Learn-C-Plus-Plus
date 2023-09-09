#include <iostream>
using namespace std;

int main() {
    // Integer Variables
    int age = 30; // Represents a signed integer
    cout << "Age: " << age << endl;

    // Floating-Point Variables
    double price = 19.99; // Represents a double-precision floating-point number
    cout << "Price: " << price << endl;

    // Character Variable
    char grade = 'A'; // Represents a single character
    cout << "Grade: " << grade << endl;

    // Boolean Variable
    bool isRaining = true; // Represents a Boolean value (true or false)
    cout << "Is Raining? " << isRaining << endl;

    // String Variable (C++ string)
    string name = "John Doe"; // Represents a sequence of characters
    cout << "Name: " << name << endl;

    // Constant Variable (Cannot be modified)
    const double pi = 3.14159265359;
    cout << "Value of Pi: " << pi << endl;

    // Auto Keyword (Infer variable type)
    auto x = 42; // Compiler infers the type as int
    auto y = 3.14; // Compiler infers the type as double
    cout << "x: " << x << ", y: " << y << endl;

    return 0;
}
