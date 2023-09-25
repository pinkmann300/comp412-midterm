#ifndef LIST_H
#define LIST_H

class Node;

class List {
private:
    Node* head;

public:
    List();
    List(const List& other);
    List& operator=(const List& other);
    ~List();
    void append(int data);
    void display();
    void clear();
};

#endif
