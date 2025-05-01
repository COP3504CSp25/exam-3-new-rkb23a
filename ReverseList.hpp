#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        
        LinkedList List;
        Node* current = this->head;
        
        // will add nodes to new List and bump them back one each time.
        while (current != nullptr){
            List.addHead(current->data);
            current -> next;
        }

        return List;
    }

    Node* head = nullptr;
};
