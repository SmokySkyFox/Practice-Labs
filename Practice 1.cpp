#include <iostream>
using namespace std;

struct Smartphone {
    string name;
    int storageSpace;
    string color;
    float price;
};

int main(){ 
    string name = "Phone go boom";
    int storageSpace = 10;
    string color = "Boom works";
    float price = 6767.67;

    string name2 = "Phone didn't go boom";
    int storageSpace2 = 20;
    string color2 = "Boom no works";
    float price2 = 0.01;

    cout << "test run works";

    Smartphone smartphone; 

    system("pause > 0");
}