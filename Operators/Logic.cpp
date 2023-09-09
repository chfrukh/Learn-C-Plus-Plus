#include <iostream>
using namespace std;

int main() {
    // Logical AND (&&) demonstration
    bool a = true;
    bool b = false;
    cout << "Logical AND (&&) results:" << endl;
    cout << a << " && " << b << " = " << (a && b) << endl;

    // Logical OR (||) demonstration
    cout << "\nLogical OR (||) results:" << endl;
    cout << a << " || " << b << " = " << (a || b) << endl;

    // Logical NOT (!) demonstration
    cout << "\nLogical NOT (!) results:" << endl;
    cout << "!" << a << " = " << !a << endl;

    // Bitwise AND (&) demonstration
    int x = 5; // binary: 0101
    int y = 3; // binary: 0011
    cout << "\nBitwise AND (&) results:" << endl;
    cout << x << " & " << y << " = " << (x & y) << endl;

    // Bitwise OR (|) demonstration
    cout << "\nBitwise OR (|) results:" << endl;
    cout << x << " | " << y << " = " << (x | y) << endl;

    // Bitwise NOT (~) demonstration
    int z = 5; // binary: 0101
    cout << "\nBitwise NOT (~) results:" << endl;
    cout << "~" << z << " = " << (~z) << endl;

    // Bitwise XOR (^) demonstration
    cout << "\nBitwise XOR (^) results:" << endl;
    cout << x << " ^ " << y << " = " << (x ^ y) << endl;

    return 0;
}
