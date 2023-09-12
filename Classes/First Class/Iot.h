#include<iostream>
#include<iomanip>
using namespace std;

class Iot
{
private:
    int me, you;

public:
    // Default Constructor
    Iot()
    {
        cout << "I Learn C++"; // Print a message when an object is created.
    }

    // Parameterized Constructor
    Iot(int a, char b, bool c)
    {
        cout << "Enter Your Roll Number: ";
        cin >> a;
        cout << "Enter Your Name: ";
        cin >> b;
        cout << " "; // You're missing an input statement for 'c'.
    }

    // Function to print a shape with '#' symbols
    void shape(int a)
    {
        while (a > 0)
        {
            cout << setw(a) << " ";
            cout << "###" << endl;
            a--;
        }
    }

    // Function to calculate the sum of two integers
    int sum(int a, int b)
    {
        return a + b;
    }

    // Function to print the multiplication table of a number
    void table(int a)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << a << " x " << i << " = " << a * i << "\n";
        }
    }
};
