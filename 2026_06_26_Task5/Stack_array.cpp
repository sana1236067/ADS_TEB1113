#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
    string name[10]; // to store stack elements
    int top = -1;    // top (of stack)

    // Push method()
    void insert_node(string newName) {
        if (top == 9) {
            cout << "stack is full" << endl;}
            else {
            top++;
            name[top] = newName; // store new name into array at current top position
        }
    }

    // Pop method()
    void pop() {
        if (top == -1) {
            cout << "stack is empty" << endl;}
            else {
            cout << "popped: " << name[top] << endl;
            top--;
        }
    }

    // Display method()
    void display_stack() {
        if (top == -1) {
            cout << "Stack is empty" << endl;}
            else {
            for (int i = top; i >= 0; i--) {
                cout << name[i] << endl;
            }
        }
    }

    // Peek method() : displays top element
    void peek() {
        if (top == -1) {
            cout << "stack is empty" << endl;}
            else {
            cout << "top element: " << name[top] << endl;
        }
    }
};

int main() {
    Stack* stack = new Stack();

    stack->insert_node("A");
    stack->insert_node("B");
    stack->insert_node("C");
    stack->insert_node("D");

    stack->display_stack();
    stack->peek();
    stack->pop();

    cout << "stack after pop:" << endl;
    stack->display_stack();

    return 0;
}