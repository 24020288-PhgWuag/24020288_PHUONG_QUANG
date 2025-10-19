
#include <bits/stdc++.h>
using namespace std;

struct PriorityQueue {
    int arr[1000];
    int count;

    PriorityQueue() {
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool insert(int value) {
        if (count == 1000) return false;
        arr[count++] = value;
        return true;
    }

    int max() {
        if (isEmpty()) return -999;
        int maxVal = arr[0];
        for (int i = 1; i < count; i++) {
            if (arr[i] > maxVal)
                maxVal = arr[i];
        }
        return maxVal;
    }

    int delMax() {
        if (isEmpty()) return -999;
        int maxIndex = 0;
        for (int i = 1; i < count; i++) {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        int maxVal = arr[maxIndex];
        arr[maxIndex] = arr[count - 1];
        count--;
        return maxVal;
    }

    int size() {
        return count;
    }
};

int main() {
   
}
