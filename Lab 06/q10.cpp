#include <iostream>
using namespace std;

void searchContact(int* contacts, int numContacts, int target) {
    int* ptr = contacts;
    for (int i = 0; i < numContacts; i++) {
        if (*ptr == target) {
            cout << "Contact Found at Position: " << i + 1 << endl;
            return;
        }
        ptr++;
    }
    cout << "Contact Not Found" << endl;
}

int main() {
    int numContacts;
    cout << "Enter the number of contacts: ";
    cin >> numContacts;
    int* contacts = new int[numContacts];
    cout << "Enter contact numbers:" << endl;
    for (int i = 0; i < numContacts; i++) {
        cin >> contacts[i];
    }

    int target;
    cout << "Enter the contact number to search: ";
    cin >> target;

    searchContact(contacts, numContacts, target);

    delete[] contacts;
    return 0;
}

