
/* 
A linked list is a data structure that stores and orgainze data but are different from arrays.
    The difference is
    - Arrays store data right one after one in the memory
    - Linked lists are stored non-continuous collection
        ~ which stores data in a random position 
    To fix this we must 'link' the elements of a list to be able to use them

    (NOTE: pointers are included in this to tell the program to find the element.)

    The main idea of Linked lists is:
    Each element stores 2 things. The value of the current element and the pointer to the next element.
        - When it reaches the end the pointer value is NULL.
            ~ From a summary I concluded, Linked lists Non-continous collection and its random placement when collecting data causes Linked list
                data to hold 2 pieces of Data. The Value of the element called and then the pointer Address to the next address.

Advatanges:
Unlike Arrays, Arrays have fixed size while Linked Lists Dynamic Size. (Size grows when adding elements and shrinks when removing elements)

Disadvatanges:
Random Access wont work on Linked Lists due to the random positioning. Meaning if i want to access my 4th element, I would need to know where. 
    which I don't but I do know where the first one is. Which brings the case of Data holds Value and then Address to the next element.

        - So I have a large linked list, 50 to 500,000. It must start at the first element.
         ~ That said Thats why Arrays have an Advantage and it's due to its fixed size.

Linked List also uses Lots of memory, Since an element has to store 2 things 


The reason why Linked list and Arrays do not outclass each other is due to the situition and use cases of each other. 
*/

/*
Linked list do not work with built in data types but does work with user defined Data types.
*/

#include <iostream>
using namespace std;


class Node {
public:
  int Value;
  Node* Next;
  /* Remember, all of the members of a class is Private so a public modifier is needed */
};

/*This class is an User Defined type which can be used in linked lists*/

// This is to print the Linked list to the user.

void printList(Node*n){
    while (n != NULL) {
        cout << n -> Value << endl;
        n = n -> Next;
    }
}

int main() {

    Node* head = new Node ();
    Node* second = new Node ();
    Node* third = new Node ();


    head -> Value = 1;
        // We still haven't Linked the elements of the list only assigned. So we do the line of code below.
    head -> Next = second;
        /* Note we use (->) as this is accessing members through a pointer 
            rather then using (.) as this is a direct access to a direct object or refernece. */
    second -> Value = 2;
    second -> Next = third;
    third -> Value = 3; 
    third -> Next = NULL; //This is used as we know this is the last element of this list.


    
printList(head);



    system("pause > 0");
}

// Time to Study and Make was 1:33 