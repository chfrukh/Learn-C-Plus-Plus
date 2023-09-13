
#include <iostream>
using namespace std;

int main() {
    int age;

    // Input the person's age
    cout << "Enter your age: ";
    cin >> age;

    // Determine the age group using if-else if-else statements
    if (age < 0) {
        cout << "Invalid age entered. Please enter a positive number." << endl;
    } else if (age >= 0 && age < 12) {
        cout << "You are a child." << endl;
    } else if (age >= 12 && age < 18) {
        cout << "You are a teenager." << endl;
    } else if (age >= 18 && age < 60) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior citizen." << endl;
    }

    return 0;
}
