#include <bits/stdc++.h>
using namespace std;

struct MaxHeap {
    int arr[1000];
    int size;
    MaxHeap() { size = 0; }

    void push(int x) {
        arr[size] = x;
        int i = size++;
        while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void pop() {
        if (size == 0) return;
        arr[0] = arr[--size];
        heapify(0);
    }

    void heapify(int i) {
        int largest = i;
        int left = 2 * i + 1, right = 2 * i + 2;
        if (left < size && arr[left] > arr[largest]) largest = left;
        if (right < size && arr[right] > arr[largest]) largest = right;
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }
    }

    int top() { return arr[0]; }
    bool empty() { return size == 0; }
    int getSize() { return size; }
};

struct MinHeap {
    int arr[1000];
    int size;
    MinHeap() { size = 0; }

    void push(int x) {
        arr[size] = x;
        int i = size++;
        while (i > 0 && arr[(i - 1) / 2] > arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void pop() {
        if (size == 0) return;
        arr[0] = arr[--size];
        heapify(0);
    }

    void heapify(int i) {
        int smallest = i;
        int left = 2 * i + 1, right = 2 * i + 2;
        if (left < size && arr[left] < arr[smallest]) smallest = left;
        if (right < size && arr[right] < arr[smallest]) smallest = right;
        if (smallest != i) {
            swap(arr[i], arr[smallest]);
            heapify(smallest);
        }
    }

    int top() { return arr[0]; }
    bool empty() { return size == 0; }
    int getSize() { return size; }
};