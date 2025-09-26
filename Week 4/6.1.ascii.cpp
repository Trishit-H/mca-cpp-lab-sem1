// A character is entered through keyboard. Write a C++ program to determine
// whether the character entered is a capital letter, a small case letter, a digit or a
// special symbol using if-else and switch case. The following table shows the
// range of ASCII values for various characters.

// Characters ASCII values => A – Z: 65 – 90, a – z: 97 – 122, 0 – 9: 48 – 57
// Special symbols => 0 – 47, 58 – 64, 91 – 96, 123 – 127

// USING IF-ELSE BLOCKS

#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "UPPERCASE LETTER!" << endl;
    } else if(ch >= 'a' && ch <= 'z') {
        cout << "LOWERCASE LETTER!" << endl;
    } else if(ch >= '0' && ch <= '9') {
        cout << "DIGIT!" << endl;
    } else {
        cout << "SPECIAL CHARACTER!" << endl;
    }

    return 0;
}
