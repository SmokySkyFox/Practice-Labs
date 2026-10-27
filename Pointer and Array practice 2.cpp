#include <iostream>
using namespace std;

int main() 
{
    // Code below is an there to help understand the idea of Pointers and Arrays

 /* int luckyNumbers[5] ={2, 3, 5, 7, 9};

 cout << luckyNumbers << endl;
 cout << &luckyNumbers[0] << " pointer version" << endl;

 cout << luckyNumbers[2] << endl;
 cout << &luckyNumbers[2] << endl;

 cout << * (luckyNumbers + 2 ) << " Same as 'luckyNumbers' but longer" << endl; */

 int luckyNumbers[5];

 for (int i = 0; i <= 4; i++){
    cout << "Enter Number: ";
    cin >> luckyNumbers[i];  
 }

 for (int i = 0; i <= 4; i++){
    cout << *(luckyNumbers + i) << "   ";
 }

// Tapping behind the line numbers makes a Breakpoint. A breakpoint tells the program to stop running. At that line

    system("pause<0");
    return 0;
}