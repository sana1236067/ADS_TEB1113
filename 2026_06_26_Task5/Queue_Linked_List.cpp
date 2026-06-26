#include <iostream>
#include <string>
using namespace std;

class Queue {
public:
    string name;
    Queue* next = NULL;
    Queue* front_node = NULL; // front of queue
    Queue* rear_node = NULL;  // back of queue

    // Enqueue() : insert at back
    void insert_node(string name) {
        Queue* newnode = new Queue();
        newnode->name = name;
        newnode->next = NULL;

        if (front_node == NULL) {
            front_node = newnode;
            rear_node = newnode;}
        else {
            rear_node->next = newnode;
            rear_node = newnode;}
    }

    // Dequeue() : remove from front
    void pop() {
        if (front_node == NULL) {
            cout << "queue is empty" << endl;}
        else {
            Queue* temp = front_node;
            cout << "popped: " << temp->name << endl;
            front_node = front_node->next;
            if (front_node == NULL) {
                rear_node = NULL;}
            delete temp;
        }
    }

    void display_queue() {
        Queue* display_node = front_node;
        while (display_node != NULL) {
            cout << display_node->name << endl;
            display_node = display_node->next;
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