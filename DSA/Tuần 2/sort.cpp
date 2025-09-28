#include <iostream>
#include <algorithm>
#include <vector>

double findMedian(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n / 2];
}


void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];
    while (i <= j) {
        while (a[i] < pivot) ++i;
        while (a[j] > pivot) --j;

        if (i <= j) {
            std::swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}

// quickSort

void quickSort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];
    while (i <= j) {
        while (a[i] < pivot) ++i;
        while (a[j] > pivot) --j;

        if (i <= j) {
            std::swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}


// mergesort
#define MAXN 1000

int a[MAXN];

void mergeSort(int data[], int left, int right) {
    if (left >= right) return;

    int mid = (left + right) / 2;
    mergeSort(data, left, mid);
    mergeSort(data, mid + 1, right);

    int i = left, j = mid + 1, cur = 0;
    while (i <= mid || j <= right) {
        if (i > mid) a[cur++] = data[j++];
        else if (j > right) a[cur++] = data[i++];
        else if (data[i] < data[j]) a[cur++] = data[i++];
        else a[cur++] = data[j++];
    }
    for (int k = 0; k < cur; k++) data[left + k] = a[k];
}

int main() {
   
    return 0;
}
