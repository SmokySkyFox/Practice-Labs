#include <iostream>
#include <list>
using namespace std;



// this is a an example of basic lists. 


int main() {
 /*This is putting elements in the list.
   - push_back are sending the elements to the back of the list 
   - while push_front is sending elemnts to the front of the list.
 */
    list<int> myList;
    myList.push_back(10);
    myList.push_back(25);
    myList.push_front(40);

    /* this is how to remove an element off the list, in this case the first element in the list or '30' */

    myList.erase(myList.begin());

    /* The for Loop iteraties through the beginning of the list to the end of the list. 
     - This visits every element on the list.
    */

    for(list<int> :: iterator it=myList.begin(); it!=myList.end(); it++)
    {
        cout << *it << " " << endl;
    }

    cin.get();
}