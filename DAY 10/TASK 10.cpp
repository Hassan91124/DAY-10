#include <iostream>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] >= 'a' && inputString[i] <= 'z') {
            inputString[i] = inputString[i] - ('a' - 'A');
        }
    }

    cout << "Uppercase string: " << inputString << endl;

    return 0;
}
