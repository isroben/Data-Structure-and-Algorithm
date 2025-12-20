#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World!\n from Texas.";

    // Premitive Data types 
    // variables
    int age = 25;
    cout<< age << endl;
    cout<< sizeof(age) <<endl;

    // 8 Bits --> 1 Bytes
    // Int --> Memory --> 4 Bytes --> 32 Bits

    char grade='A';
    cout<< grade <<endl;

    // Char --> Memory --> 1 Byte --> 8 Bits
    // Char --> ASCII value --> Memory
    // A --> 65, B --> 66, C --> 67, ......, Z = 90
    // a --> 97, b --> 98, c --. 99, ......, z = 112


    float price = 99.99F;
    cout<< price <<endl;
    cout<< sizeof(price) <<endl;

    // Float --> Memory --> 4 Bytes --> 32 Bits


    bool isSafe = true;
    cout<< isSafe <<endl;   // true --> 1, false --> 0.

    // bool --> Memory --> 1 Byte --> 8 Bits


    double prices = 100.99;
    cout<< prices <<endl;
    // double --> Memory --> 8 Bytes --> 64 Bits


    // Type Casting
    // Conversion vs Casting

    // Conversion[implicit]
    // small -- big     eg. float (4 Bytes) --> double (8 Bytes)

    char grades = 'a';
    int value = grade;    // Implicit Converion

    cout<< value <<endl;




    // Casting [explicit]
    // Big --> Small
    int new_price = prices;
    cout<< new_price <<endl;




    return 0;
}

// Boilerplate code
