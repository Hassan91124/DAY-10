#include <iostream>

using namespace std;

int main() {
    string inputString;
    int startIndex, endIndex;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter the start index: ";
    cin >> startIndex;

    cout << "Enter the end index: ";
    cin >> endIndex;

    if (startIndex < 0 || endIndex > inputString.length() || startIndex > endIndex) {
        cout << "Invalid indices." << endl;
    } else {
        cout << "Substring: ";
        for (int i = startIndex; i < endIndex; i++) {
            cout << inputString[i];
        }
        cout << endl;
    }

    return 0;
}
