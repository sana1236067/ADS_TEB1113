#include <iostream>
#include <string>
using namespace std;

class Queue {
public:
    string name[10];   // array to store elements
    int front_node = 0; 
    int rear_node = -1;

    // Enqueue() : insert at back
    void insert_node(string newName) {
        if (rear_node == 9) {
            cout << "queue is full" << endl;}
        else {
            rear_node++;
            name[rear_node] = newName;}
    }

    // Dequeue() : remove from front
    void pop() {
        if (rear_node == -1) {
            cout << "queue is empty" << endl;}
        else {
            cout << "popped: " << name[front_node] << endl;

            // move all elements one position forward
            for (int i = 0; i < rear_node; i++) {
                name[i] = name[i + 1];}

            rear_node--;
        }
    }

    void display_queue() {
        if (rear_node == -1) {
            cout << "queue is empty" << endl;}
        else {
            for (int i = front_node; i <= rear_node; i++) {
                cout << name[i] << endl;
            }
        }
    }
};

int main() {
    Queue* queue = new Queue();
    queue->insert_node("A");
    queue->insert_node("B");
    queue->insert_node("C");
    queue->insert_node("D");

    queue->display_queue();
    queue->pop();
    cout << "queue after pop:" << endl;
    queue->display_queue();

    return 0;
}