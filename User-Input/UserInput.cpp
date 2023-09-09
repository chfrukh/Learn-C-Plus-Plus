#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    int age;
    double height;
    string name;

    // Prompt the user for input and store it in variables
    cout << "Enter your age: ";
    cin >> age; // Read an integer from the user
    cout << "Enter your height (in meters): ";
    cin >> height; // Read a double from the user
    cout << "Enter your name: ";
    cin.ignore(); // Clear the input buffer (to read strings with spaces)
    getline(cin, name); // Read a line of text (string) from the user

    // Display the user's input
    cout << "You entered the following information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " meters" << endl;

    return 0;
}
