#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

//function to create a Node
Node* createNode(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

//function to add a node at the end
Node* insertAtEnd(Node* head, int data){
    //it will only take the head and based on that, it will find out the end of the list
    //check if head is empty, then we are inserting the head itself
    Node* newNode = createNode(data);
    
    if(head == nullptr){
        return newNode;
    }

    //incase its not the head, we have to find the end of the list
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    
    //update the second last node now
    temp->next = newNode;
    //returns the head, which remains unpdated unless we are creating the head itself
    return head;
}

//access a node by index
void accessNode(Node* head, int index){

    Node* temp = head;

    //we can search till end of list
    while(temp != nullptr){
        if(index == 0){
            cout << "Node holds value: " << temp->data << endl;
            return;
        }
        index--;
        temp = temp->next;
    }

    cout << "Node was not found" << endl;
}

//delete the nth node
Node* deleteNode(Node* head, int index){
    //check if list is empty
    Node* temp = head;
    if(temp == nullptr){
        cout << "Error, list id empty" << endl;
        return nullptr;
    }

    //check of its the head itself
    if(index == 0){
        //move the head down one spot
        temp = temp->next;
        delete head;
        return temp;
    }

    //Else traverse the list to the node just before the one we want to delete
    for(int i = 0; temp != nullptr && i < index - 1; i++){
        temp = temp->next;
    }

    //if temp is null or node after temp is null, the node does not exits
    if(temp == nullptr || temp->next == nullptr){
        cout << "Error, index out of bounds" << endl;
        return head;
    }

    //else, bridgethe gap
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next; //bridged
    //delete the node
    delete nodeToDelete;

    return head;
}

//insert Node at index n
Node* insertAtIndex(Node* head, int data, int index){
    //check if inserting at head
    if(index == 0){
        Node* temp = createNode(data);
        //shift the head one node down
        temp->next = head;
        return temp; //this is the new head now
    }

    Node* temp = head;
    //traverse upto 1 node less than the target position
    for(int i = 0; temp != nullptr && i < index - 1; i++){
        temp = temp->next;
    }

    //check if index was larger than list end
    if(temp == nullptr){
        cout << "Index out of bounds" << endl;
        return head;
    }

    //at this node we now create the new node
    Node* newNode = createNode(data);
    //update he new node to hold he pointer held by current node
    newNode->next = temp->next;
    //update current Node to point to new node
    temp->next = newNode;

    return head;
}

//print the linked list
void printList(Node* head){
    //check if empty list
    Node* temp = head;
    if(temp == nullptr){
        cout << "Error: List if empty" << endl;
        return;
    }

    //traverse the list and keep printing
    int index = 0;
    while(temp != nullptr){
        cout << "Node " << index << " : " << temp->data << endl;
        temp = temp->next;
        index++;
    }
}


int main(){

    int count;
    cout << "Enter number of nodes you want to make: ";
    cin >> count;
    cout << endl;

    Node* head = nullptr;

    //take inputs for the nodes
    for(int i = 0; i < count; i++){
        int value = 0;
        cout << "Value for Node " << i << " : ";
        cin >> value;
        cout << endl;

        //create the node
        head = insertAtEnd(head, value);
    }

    cout << "Final Linked list:" << endl;
    printList(head);

    int index;
    cout << "Index of node you want to access: ";
    cin >> index;
    cout << endl;

    accessNode(head, index);

    cout << "Where do you want to insert: ";
    cin >> index;
    cout << endl;

    int val;
    cout << "Value: ";
    cin >> val;
    cout << endl;

    head = insertAtIndex(head,val, index);

    printList(head);

    cout << "Node you want to delete: ";
    cin >> index;
    cout << endl;

    head = deleteNode(head, index);

    printList(head);

    return 0;
}