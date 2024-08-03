#include <iostream>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    int index = 0;
    while (inputString[index] != '\0') {
        cout << "Index " << index << ": " << inputString[index] << endl;
        index++;
    }

    return 0;
}
