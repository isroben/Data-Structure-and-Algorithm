#include<iostream>

#include<bits/stdc++.h>

using namespace std;

class Person {
public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    Person(){}

};

class Pets : public Person{
public:
    string Category;

    void getInfo(){
        cout<< "Name of Pet: "<<name<<endl;
        cout<< "Age of Pet: "<<age<<endl;
        cout<< "Category of Pet: "<<Category<<endl;
    }
};


int main(){
    Pets p1;
    p1.name = "Jimmy";
    p1.age = 3;
    p1.Category = "Cat";

    p1.getInfo();

    
    return 0;
}