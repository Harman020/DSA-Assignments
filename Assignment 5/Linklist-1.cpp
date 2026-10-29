
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// (a) Insert at beginning
void insertBeginning(int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    cout << "Node inserted at beginning.\n";
}

// (b) Insert at end
void insertEnd(int value) {
    Node* newNode = createNode(value);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    cout << "Node inserted at end.\n";
}

// (c) Insert before a specific node
void insertBefore(int key, int value) {
    if (head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    if (head->data == key) {
        insertBeginning(value);
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr &&
           temp->next->data != key)
        temp = temp->next;

    if (temp->next == nullptr) {
        cout << "Target node not found!\n";
        return;
    }

    Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Node inserted before " << key << ".\n";
}

// (c) Insert after a specific node
void insertAfter(int key, int value) {
    Node* temp = head;

    while (temp != nullptr && temp->data != key)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Target node not found!\n";
        return;
    }

    Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Node inserted after " << key << ".\n";
}

// (d) Delete from beginning
void deleteBeginning() {
    if (head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    cout << "Deleted node: " << temp->data << "\n";
    delete temp;
}

// (e) Delete from end
void deleteEnd() {
    if (head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    if (head->next == nullptr) {
        cout << "Deleted node: " << head->data << "\n";
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while (temp->next->next != nullptr)
        temp = temp->next;

    Node* last = temp->next;
    cout << "Deleted node: " << last->data << "\n";

    temp->next = nullptr;
    delete last;
}

// (f) Delete a specific node
void deleteSpecific(int key) {
    if (head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    if (head->data == key) {
        deleteBeginning();
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr &&
           temp->next->data != key)
        temp = temp->next;

    if (temp->next == nullptr) {
        cout << "Node " << key << " not found!\n";
        return;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;

    cout << "Deleted node: " << delNode->data << "\n";
    delete delNode;
}

// (g) Search for a node and display its position
void searchNode(int key) {
    Node* temp = head;
    int position = 1;

    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Node " << key
                 << " found at position "
                 << position << ".\n";
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Node " << key << " not found!\n";
}

// (h) Display all nodes
void display() {
    if (head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Free memory before exiting
void freeList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int choice, value, key;

    do {
        cout << "\n===== SINGLY LINKED LIST MENU =====\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert before a specific node\n";
        cout << "4. Insert after a specific node\n";
        cout << "5. Delete from beginning\n";
        cout << "6. Delete from end\n";
        cout << "7. Delete a specific node\n";
        cout << "8. Search for a node\n";
        cout << "9. Display all nodes\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertEnd(value);
                break;

            case 3:
                cout << "Enter target node value: ";
                cin >> key;
                cout << "Enter new node value: ";
                cin >> value;
                insertBefore(key, value);
                break;

            case 4:
                cout << "Enter target node value: ";
                cin >> key;
                cout << "Enter new node value: ";
                cin >> value;
                insertAfter(key, value);
                break;

            case 5:
                deleteBeginning();
                break;

            case 6:
                deleteEnd();
                break;

            case 7:
                cout << "Enter value to delete: ";
                cin >> key;
                deleteSpecific(key);
                break;

            case 8:
                cout << "Enter value to search: ";
                cin >> key;
                searchNode(key);
                break;

            case 9:
                display();
                break;

            case 0:
                freeList();
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
