#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left; //left child (prev)
    Node* right;//right child (next) 
    };

int main() {
    // Node* node1 = new Node(); -> for double linked list 
    Node* root = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    Node* node5 = new Node();

    // node1->name = "John" -> double linked list
    root->data = 10;
    node2->data = 20;
    node3->data = 30;
    node4->data = 40;
    node5->data = 50;

    root->left = node2; //left child of node
    root->right = node3; //right child of node
    
    node2->left = node4; //left child of node2
    node2->right = node5; //right child of node2

    // Display the tree manually
    cout << "Root: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " << root->right->data << endl;
    cout << "Left child of " << node2->data << ": " << node2->left->data << endl;
    cout << "Right child of " << node2->data << ": " << node2->right->data << endl;
    
    return 0; }