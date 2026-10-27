#include <iostream>
using namespace std;

/* Pointers example
    - Foucs on how pointers address work and how to change 
        the varable output using pointers.
*/

/*int main() {
    int n = 5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;

    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int* ptr2=&v;
    *ptr2 = 7; 
    cout << "v = " << *ptr2 << endl;


    system("pause>0");
    return 0; 
} 
                */





/* Void pointers Example:
    - Using pointers in with the void function and how to call them.
    - Can also be used with switch function within a void function to check the type of 
        information receved (int, float, char, etc) to correctly deal with that pointer
*/

void printNumber(int*numberptr) {
    cout << *numberptr << endl;
}
void printLetter(char*charptr) {
    cout << *charptr << endl;
}
void print(void*ptr, char type){
    switch(type) {
    case 'i' :cout << * ((int*)ptr) << endl; break;  /*handles int*  */
    case 'c' :cout << * ((char*)ptr) << endl; break; /*handles char*  */
    }
    /* Careful this code above with (switch), the compilar on void*ptr does not know if youre making an error or not.
        due to void pointers taking any type of data. which could lead to an undefined information or (logical errors) */


int main (){

    int number = 5; 
    char letter = 'a';
    
  /*printNumber(&number);
    printLetter(&letter); */
    print (&number, 'i');
    print (&letter, 'c');


    system("pause<0");
    return 0;
}
    