#include <iostream>
#include <string>

using namespace std;

class Node{
public:
    string name;
    Node* next = NULL;

    void insertion(Node* &head, string newName){
        Node* newNode = new Node();
        newNode->name = newName;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void deletion(Node* &head, string targetName){
        if(head == NULL){
            return;
        }

        if(head->name == targetName){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;

        while(current->next != NULL &&
              current->next->name != targetName){
            current = current->next;
        }

        if(current->next != NULL){
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }

    void display_list(Node* head){
        Node* display_node = head;

        while(display_node != NULL){
            cout << display_node->name << endl;
            display_node = display_node->next;
        }
    }
};

int main() {

    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    Node* node5 = new Node();

    node1->name = "Aiman";
    node2->name = "Ahmad";
    node3->name = "Anajana";
    node4->name = "Jessy";
    node5->name = "Ali";

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    cout << "Original List:" << endl;
    node1->display_list(node1);

    cout << "\nAfter Insertion:" << endl;
    node1->insertion(node1, "Sarah");
    node1->display_list(node1);

    cout << "\nAfter Deletion (Jessy):" << endl;
    node1->deletion(node1, "Jessy");
    node1->display_list(node1);

    return 0;
}