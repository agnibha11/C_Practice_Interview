#include <iostream>
using namespace std;

//implementation using LinkedList
struct Node{
    int val;
    Node* next;
};

void push(Node** head, int value){
    Node* temp = *head;
    //create the pointer
    *head = new Node;
    (*head)->val = value;
    (*head)->next = temp;
    return;
}

int pop(Node** head){
    //check if list if empty
    if(*head == nullptr){
        cout << "Error: empty stack" << endl;
        return -1;
    }

    int result = (*head)->val;
    //remove the node
    Node* temp = *head;
    (*head) = (*head)->next;
    delete temp;

    return result;
}

int getMin(Node** head){
    //check if empty
    if(*head == nullptr){
        cout << "Error: Empty Stack" << endl;
        return -1;
    }

    int min = (*head)->val;
    Node* temp = *head;
    //traverse the list to find the min element
    while(temp->next != nullptr){
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }

    return min;
}

void printStack(Node** head){
    Node* temp = *head;
    while(temp != nullptr){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    cout << "Size of Stack: ";
    int len;
    cin >> len;

    Node* head = nullptr;

    for(int i = 0; i < len; i++){
        cout << "Value at " << i << ": ";
        int val;
        cin >> val;
        push(&head, val);
    }

    cout << "Stack is:" << endl;
    printStack(&head);

    cout << "First 3 popped: " << endl;
    cout << pop(&head) << endl;
    cout << pop(&head) << endl;
    cout << pop(&head) << endl;

    cout << "Stack is:" << endl;
    printStack(&head);

    return 0;
}