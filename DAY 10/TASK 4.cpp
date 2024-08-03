#include <iostream>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}
