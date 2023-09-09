#include <iostream>
using namespace std;

int main() {
    // Integer Types
    int age = 30; // Represents signed integers
    short distance = 1000; // Represents short integers
    long population = 1000000L; // Represents long integers
    long long bigNumber = 123456789012345LL; // Represents very long integers
    unsigned int positiveValue = 42u; // Represents unsigned integers (no negative values)

    // Floating-Point Types
    float height = 5.8f; // Represents single-precision floating-point numbers
    double price = 19.99; // Represents double-precision floating-point numbers
    long double extendedPrecision = 3.14159265358979323846L; // Represents extended-precision floating-point numbers

    // Character Types
    char grade = 'A'; // Represents a single character
    wchar_t wideChar = L'Ω'; // Represents wide characters (for internationalization)
    char16_t utf16Char = u'€'; // Represents 16-bit characters
    char32_t utf32Char = U'🙂'; // Represents 32-bit characters

    // Boolean Type
    bool isRaining = true; // Represents Boolean values (true or false)

    // Enumeration Type
    enum Color { RED, GREEN, BLUE }; // Represents a set of named integer constants
    Color selectedColor = GREEN;

    // User-Defined Types (struct)
    struct Point {
        int x;
        int y;
    };
    Point p1;
    p1.x = 3;
    p1.y = 5;

    // Pointer Types
    int* intPtr = nullptr; // Pointer to an integer (initialized to nullptr)
    int value = 42;
    intPtr = &value; // Store the address of 'value' in 'intPtr'

    // Void Type (for functions with no return value)
    void printMessage() {
        cout << "Hello, World!" << endl;
    }

    // Output values
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Raining? " << isRaining << endl;
    cout << "Selected Color: " << selectedColor << endl;
    cout << "Point: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Pointer Value: " << *intPtr << endl;

    // Call the function with void return type
    printMessage();

    return 0;
}
