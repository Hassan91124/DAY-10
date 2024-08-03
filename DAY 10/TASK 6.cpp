#include <iostream>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    for (int i = 0; inputString[i] != '\0'; i++) {
        cout << inputString[i] << endl;
    }

    return 0;
}
