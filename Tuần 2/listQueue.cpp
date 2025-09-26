#include <iostream>

struct Queue {
    int arr[100];
    int head;
    int tail;
    int count;

    Queue() {
        head = 0;
        tail = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    int size() {
        return count;
    }

    void enqueue(int n) {
        if (count == 100) {
            std::cout << "Queue day\n";
            return;
        }
        tail = (tail + 1) % 100;
        arr[tail] = n;
        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue rong!\n";
            return -1;
        }
        int val = arr[head];
        head = (head + 1) % 100;
        count--;
        return val;
    }

     int peek() {
        if (isEmpty()) {
            std::cout << "Queue rong\n";
            return -1;
        }
        return arr[head];
    }
};

int main() {
    
    return 0;
}