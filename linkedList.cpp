#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class List {
private:
    Node* head;

public:
 
    List() : head(nullptr) {}


    List(const List& other) {
        head = nullptr;
        Node* current = other.head;
        while (current != nullptr) {
            append(current->data);
            current = current->next;
        }
    }


    List& operator=(const List& other) {
        if (this != &other) { // Test for self-assignment

            clear();

            Node* current = other.head;
            while (current != nullptr) {
                append(current->data);
                current = current->next;
            }
        }
        return *this;
    }

    ~List() {
        clear();
    }

    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }


    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {

    List originalList;
    originalList.append(1);
    originalList.append(2);
    originalList.append(3);

    List copyList1 = originalList;
    std::cout << "Copy List 1: ";
    copyList1.display();


    List copyList2;
    copyList2 = originalList;
    std::cout << "Copy List 2: ";
    copyList2.display();

    return 0;
}
