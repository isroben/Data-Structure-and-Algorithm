#include<iostream>

#include<bits/stdc++.h>

using namespace std;

class Student {
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }

    ~Student(){
        cout<<"Hi i am delete everything\n";
        delete cgpaPtr;
    }
};


int main(){
    Student s1("Rakesh", 8.7);
    s1.getInfo();

    return 0;
}