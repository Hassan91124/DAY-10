#include <iostream>

using namespace std;

int main() {
    string numberString;
    int number;

    cout << "Enter a number as a string: ";
    cin >> numberString;

    number = 0;
    for (char c : numberString) {
        number = number * 10 + (c - '0');  // Convert char to int
    }

    int result = number - 10;
    cout << "Result after subtracting 10: " << result << endl;

    return 0;
}
