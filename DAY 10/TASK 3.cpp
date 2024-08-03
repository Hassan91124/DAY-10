#include <iostream>

using namespace std;

int main() {
    string inputString;
    int index;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter an index: ";
    cin >> index;

    if (index >= 0 && index < inputString.length()) {
        cout << "Character at index " << index << ": " << inputString[index] << endl;
    } else {
        cout << "Index out of bounds." << endl;
    }

    return 0;
}
