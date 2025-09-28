#include <iostream>

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* head;
    int count;

    Stack() {
        head == nullptr;
        count = 0;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        count++;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack rong\n";
            return -1;
        }
        Node* temp = head;
        int value = temp->data;
        head = head->next;
        delete temp;
        count--;
        return value;
    }

    int size() {
        return count;
    }

    int top() {
        if (isEmpty()) {
            std::cout << "Stack rong\n";
            return -1;
        }
        return head->data;
    }

};

int main() {
    
    return 0;
}