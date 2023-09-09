#include <iostream>
using namespace std;

int main() {
    // Title
    cout << "Escape Sequences in C++" << endl;

    // 1. Backslash: \
    cout << "1. Backslash: \\" << endl;

    // 2. Double Quote: "
    cout << "2. Double Quote: \"" << endl;

    // 3. Single Quote: '
    cout << "3. Single Quote: \'" << endl;

    // 4. Newline: 
    cout << "4. Newline: \nHello, World!" << endl;

    // 5. Tab:    (Adds horizontal space)
    cout << "5. Tab:\tThis is indented." << endl;

    // 6. Backspace: Start (Moves cursor back one position): StartEnd
    cout << "6. Backspace: Start\bEnd" << endl;

    // 7. Carriage Return: Overwritten (Moves cursor to the beginning of the line): New Textwritten
    cout << "7. Carriage Return: Overwritten\rNew Text" << endl;

    // 8. Bell Sound: (Produces a system alert or bell sound)
    cout << "8. Bell Sound: \a" << endl;

    // 9. Vertical Tab:    (Adds vertical space)
    cout << "9. Vertical Tab: \vVertical" << endl;

    // 10. Form Feed: (Moves to the next page or screen)
    cout << "10. Form Feed: \fForm Feed" << endl;

    // 11. Question Mark: ?
    cout << "11. Question Mark: \?" << endl;

    // 12. Null Character (Terminates): (Terminates the string): Text
    cout << "12. Null Character (Terminates): Text\0Remaining" << endl;

    // 13. Hexadecimal Value: Hello
    cout << "13. Hexadecimal Value: \x48\x65\x6C\x6C\x6F" << endl;

    // 14. Octal Value: ABC
    cout << "14. Octal Value: \101\102\103" << endl;

    return 0;
}
