#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age\n";
    cin>>age;
    cout<<"Your age is: "<< age <<endl;

    float price;
    cout<< "Enter the price of book: \n";
    cin>> price;
    cout<< "The price of the book is: "<< price << endl;

    
    
    // Operators
    int a = 5, b = 10;
    
    cout<<"Sum is = "<< (a+b) <<endl;
    cout<<"Difference is = "<< (a-b) <<endl;
    cout<<"Product is = "<< (a*b) <<endl;
    cout<<"Division is = "<< (a/b) <<endl;
    cout<<"Modulo is: "<<(a%b)<<endl;


    cout<<(5/2)<<endl;   // int/int --> Int
    float c = 2.0;
    cout<<(a/c) <<endl;  // int/float or int/double --> float

    
    // For direct value --> TypeCasting
    cout<< (5/(double)2)<<endl;



    // Logical Operator
    cout<< !(3>1) <<endl;



    return 0;
}