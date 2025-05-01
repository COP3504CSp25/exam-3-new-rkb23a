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

        if (current == nullptr){
            return List;
        }

        else if (current -> next == nullptr){
            List.addHead(current->data);
            return List;
        }

        // will add nodes to new List and bump them back one each time.
        else {
            while (current != nullptr){
            List.addHead(current->data);
            current = current -> next;
        }
    

        return List;
    }
    }

    Node* head = nullptr;
};
