
#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH operation
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " inserted\n";
    }
}

// POP operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << stack[top] << " deleted\n";
        top--;
    }
}

// Display stack
void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}
