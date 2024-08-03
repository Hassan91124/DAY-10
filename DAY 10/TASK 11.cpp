#include <iostream>

using namespace std;

struct Item {
    string name;
    float price;
};

int main() {
    // Predefined list of grocery items
    Item inventory[] = {
        {"Apple", 0.5},
        {"Banana", 0.3},
        {"Carrot", 0.2},
        {"Tomato", 0.4}
    };
    const int numItems = sizeof(inventory) / sizeof(inventory[0]);

    // Shopping cart and cart management
    int cart[numItems] = {0};
    int choice;

    while (true) {
        cout << "\nGrocery Store Menu:\n";
        cout << "1. View Inventory\n";
        cout << "2. Add Item to Cart\n";
        cout << "3. Checkout\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Display inventory
            cout << "\nAvailable items:\n";
            for (int i = 0; i < numItems; i++) {
                cout << i + 1 << ". " << inventory[i].name << " - $" << inventory[i].price << endl;
            }
        } else if (choice == 2) {
            // Add item to cart
            int itemNumber, quantity;
            cout << "Enter the item number to add to the cart: ";
            cin >> itemNumber;
            if (itemNumber < 1 || itemNumber > numItems) {
                cout << "Invalid item number." << endl;
                continue;
            }
            cout << "Enter quantity: ";
            cin >> quantity;
            cart[itemNumber - 1] += quantity;
            cout << "Added " << quantity << " " << inventory[itemNumber - 1].name << "(s) to the cart." << endl;
        } else if (choice == 3) {
            // Checkout process
            float totalCost = 0.0;
            cout << "\nCart Summary:\n";
            for (int i = 0; i < numItems; i++) {
                if (cart[i] > 0) {
                    cout << inventory[i].name << " x" << cart[i] << " - $" << cart[i] * inventory[i].price << endl;
                    totalCost += cart[i] * inventory[i].price;
                }
            }
            cout << "Total cost: $" << totalCost << endl;
            break; // Exit after checkout
        } else if (choice == 4) {
            cout << "Exiting the program." << endl;
            break; // Exit the program
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
