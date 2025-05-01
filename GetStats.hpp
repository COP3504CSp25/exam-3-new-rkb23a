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

    int* getStats() const{

        int* arr = new int[3];

        // if list is empty
        if (head == nullptr){
            arr [0] = 0;
            arr [1] = 0;
            arr [2] = 0;
            return arr;
        }

        else{
            Node *temp = new Node;
            
            // Min
            temp = head;
            int min = head->data;

            while (temp != nullptr){
                if (temp -> data < min){
                    min = temp -> data;
                }
                temp->next;
            }
            arr[0] = min;
            
            // Max
            temp = head;
            int max = head->data;

            while (temp != nullptr){
                if (temp -> data > max){
                    max = temp -> data;
                }
                temp->next;
            }
            arr[1] = max;
            
            // Median
            temp = head;
            int median = 0;
            int count = 0;

            while (temp != nullptr){
                median += temp -> data;
                temp->next;
                count++;
            }
            median /= count;
            arr[2] = median;
            return arr;
        }
    }
    

private:
    Node* head = nullptr;
};
