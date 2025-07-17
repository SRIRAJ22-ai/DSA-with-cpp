#include "queues.h"
#include <iostream>
using namespace std;

int main() {
    Queue queue;
    int choice, value;
    while (true) {
        cout << "\n Queue Operations:-\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Get Front\n";
        cout << "4. Get Rear\n";
        cout << "5. Get Size\n";
        cout << "6. Exit\n";
        cout << "Enter your choice:- ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue:- ";
                cin >> value;
                queue.enqueue(value);
                break;

            case 2:
                queue.dequeue();
                break;

            case 3:
                queue.get_front();
                break;

            case 4:
                queue.get_rear();
                break;

            case 5:
                queue.get_size();
                break;

            case 6:
                cout << "Exiting program.......\n";
                return 0;
                
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}