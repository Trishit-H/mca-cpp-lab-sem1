// USING SWITCH-CASE BLOCKS

#include <iostream>

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // 1 = Uppercase, 2 = Lowercase, 3 = Digit, 4 = Special character
    int category = 0;

    if(ch >= 'A' && ch <= 'Z') category = 1;
    else if(ch >= 'a' && ch <= 'z') category = 2;
    else if(ch >= '0' && ch <= '9') category = 3;
    else category = 4;

    switch(category) {
        case 1:
            cout << "UPPERCASE!" << endl;
            break;

        case 2:
            cout << "LOWERCASE!" << endl;
            break;

        case 3:
            cout << "DIGIT!" << endl;
            break;

        case 4:
            cout << "SPECIAL CHARACTER!" << endl;
            break;

        default:
            cout << "UNKNOWN!" << endl;
    }

    return 0;
}
