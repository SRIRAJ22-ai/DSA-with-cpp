#include "stacks.h"

int main() {
    Stack stack;
    int choice, value;

    cout << "Stack Operations:- \n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peek\n";
    cout << "4. Get Size\n";
    cout << "5. Exit\n";

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.peek();
                break;

            case 4:
                stack.getsize();
                break;

            case 5:
                cout << "Exiting......\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}