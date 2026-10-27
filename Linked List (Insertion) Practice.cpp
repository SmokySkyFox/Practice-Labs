
/* 
This is a copy from Basic Linked List Practice.cpp but in this case this code Practice code will foucs on Insertion at the front, at the end, and after a given Node.
*/

#include <iostream>
using namespace std;


class Node {
public:
  int Value;
  Node* Next;
};

void printList(Node*n){
    while (n != NULL) {
        cout << n -> Value << endl;
        n = n -> Next;
    }
}

// Making a function to insert in the front of the Linked List.
void insertAtTheFront(Node**head, int newValue){ //Note: (**) Means a Pointer to a Pointer
    /* Steps to making this function:
        1. Prepare a newNode
        2. Put it in front of current Head
        3. Move head of the list to point to the newNode.
*/

// Step 1:
    Node* newNode = new Node();
    newNode -> Value = newValue;
// Step 2 
    newNode -> Next = *head;
// Step 3
    *head = newNode;
}


// Making a function to insert at the end of the Linked List.
void insertAtTheEnd(Node**head, int newValue){
    /* Steps to make this Function
        1. Preapare a newNode
        2. If linked list is empty, newNode will be a head node
        3. Find the last node 
        4. Insert newNode after the last node (at the end)
*/

// Step 1:
    Node* newNode = new Node();
    newNode -> Value = newValue;
    newNode -> Next = NULL;
// Step 2:
    if (*head == NULL) {
        *head = newNode;
        return;
    }
// Step 3:
    Node* last = *head; // Reason why we start at head is because the memory of the pointers are stored in each element. So we start at head to find the last Element.
    while(last -> Next != NULL) {
        last = last -> Next;
    }
// Step 4:
    last -> Next = newNode;
}


// Making a function to insert a element after a Specific Node.
void insertAfter(Node*previous, int newValue){
    /* Steps to make this function.
        1. Check if previous node is NULL
        2. Prepare a newNode
        3. Insert newNode after previous
    */

// Step 1:
    if (previous == NULL){
        cout << "Previous can not be NULL";
        return;
    }
// Step 2:
    Node* newNode = new Node ();
    newNode -> Value = newValue;
// Step 3: (Note: Do keep in mind, is WHEN to break the connection to Node A to Node B so we dont lose the address to Node B as this is the only thing carrying that address)
    newNode -> Next = previous -> Next;
    previous -> Next = newNode;

}
int main() {

    Node* head = new Node ();
    Node* second = new Node ();
    Node* third = new Node ();


    head -> Value = 1;
    head -> Next = second;
    second -> Value = 2;
    second -> Next = third;
    third -> Value = 3; 
    third -> Next = NULL; 

// Invokes the insertAtTheFront Function.
    insertAtTheFront(&head, -1);
    insertAtTheFront(&head, -2);

// Invokes the insertAtTheEnd Function.
    insertAtTheEnd(&head, 7);
    insertAtTheEnd(&head, 10);

// Invokes the insertAfter Function.
    insertAfter(head, -5);
// Note: Since the other functions are called before this one. The head would be (-2) from the insertAtTheFront function casuing this function to be added after that.
    insertAfter(second, 25);
    insertAfter(third, 35);
    

    printList(head);



    system("pause > 0");
}

// Time to Study and Make was 