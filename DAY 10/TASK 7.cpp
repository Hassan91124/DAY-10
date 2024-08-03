#include <iostream>

using namespace std;

int main() {
    string inputString;
    char targetChar;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter a character to count: ";
    cin >> targetChar;

    int count = 0;
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == targetChar) {
            count++;
        }
    }

    cout << "The character '" << targetChar << "' appears " << count << " times." << endl;

    return 0;
}
