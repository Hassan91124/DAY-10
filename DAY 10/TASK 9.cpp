#include <iostream>

using namespace std;

int main() {
    string inputString, searchString;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter a substring to search for: ";
    cin >> searchString;

    int foundIndex = -1;
    for (int i = 0; i <= inputString.length() - searchString.length(); i++) {
        bool found = true;
        for (int j = 0; j < searchString.length(); j++) {
            if (inputString[i + j] != searchString[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Substring found at index: " << foundIndex << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    string inputString, searchString;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter a substring to search for: ";
    cin >> searchString;

    int foundIndex = -1;
    for (int i = 0; i <= inputString.length() - searchString.length(); i++) {
        bool found = true;
        for (int j = 0; j < searchString.length(); j++) {
            if (inputString[i + j] != searchString[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Substring found at index: " << foundIndex << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
