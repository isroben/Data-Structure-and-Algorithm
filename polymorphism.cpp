#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Student { // Constructor Overloading
public:
    string name;

    Student(){
        cout <<"Non Parameterized\n";
    }

    Student(string name){
        cout <<"Parameterized\n";
    }
};

class Print { // Function Overloading
public:
    void show(int x){
        cout <<"int "<< x <<endl;
    }
    void show(char ch){
        cout <<"Char: "<< ch <<endl;
    }
};

int main(){
    Student s1("Tony Stark");

    Print p1;
    p1.show(101);
    p1.show('H');

    return 0;
}