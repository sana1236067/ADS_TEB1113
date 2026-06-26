#include <iostream>
#include <string>
using namespace std;

class Stack{
    public: // in class, variables are automatically private -> set to public 
      string name;
      Stack* next = NULL;
      Stack * curr_node = NULL; // curr_node = top (stack)
    
    // Push method()  
    void insert_node(string name){
        Stack * newnode = new Stack();
        newnode -> name = name;
        newnode -> next = curr_node;
        curr_node = newnode;
    }
    
    // Pop method()
    void pop() {
        // temp = temporary pointer (stores current top node of the stack)
        Stack* temp = curr_node;
        // shows the name of node being removed
        cout << "Popped: " << temp->name << endl;
        // moves top of the stack to next node
        curr_node = curr_node->next;
        delete temp;
    }
    
    void display_stack(){
        Stack * display_node = curr_node;
        while(display_node != NULL) {
            cout << display_node -> name << endl;
            display_node = display_node -> next;
        }
    }
    
    // Peek method() : displays top element
    void peek() {
        if (curr_node == NULL) {
            cout << "Stack is empty" << endl;}
            else {
            cout << "Top element: " << curr_node->name << endl;
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
  stack -> peek();
  stack -> pop();
  
  cout << "Stack after pop:" << endl;
  stack->display_stack();
}
  