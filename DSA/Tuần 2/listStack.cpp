#include <iostream>

struct Stack {

    int arr[100];
    int first;

    Stack() {
        first = -1; 
    }

    // kiểm tra xem hàm rỗng không
    bool isEmpty() {
        return first == -1;
    }

    // chèn 1 phần tử vào stack;
    void push(int x) {
        if (first == 99) {
            std::cout << "Stack day\n";
            return;
        }
        arr[++first] = x; 
    }


    // xóa phần tử cuối và trả về giá trị của nó
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack rong\n";
            return -1;
        }
        return arr[first--];
    }

    // hàm trả về size;
    int size() {
        return first + 1;
    }

    int top() {
        if (isEmpty()) {
            std::cout << "Stack rong\n";
            return -1;
        }
        return arr[first];
    }

};

int main() {
  
    return 0;
}