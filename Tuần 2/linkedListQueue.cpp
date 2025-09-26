#include <iostream>

struct Node {
    int data;
    Node* next;
};

struct Queue {
    Node* head;
    int count;

    Queue() {
        head = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    int size() {
        return count;
    }

    void enqueue(int item) {
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue rong\n";
            return -1;
        }
        Node* temp = head;
        int val = temp->data;
        head = head->next;
        delete temp;
        count--;
        return val;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue rong\n";
            return -1;
        }
        return head->data;
    }
};

int main() {
    
    return 0;
}
