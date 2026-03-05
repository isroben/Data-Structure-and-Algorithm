#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Student {
public:
    string name;

    Student(){
        cout <<"Non Parameterized\n";
    }

    Student(string name){
        cout <<"Parameterized\n";
    }
};

int main(){
    Student s1("Tony Stark");

    return 0;
}