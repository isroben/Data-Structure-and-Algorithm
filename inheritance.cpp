#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class Person {
public:
    string name;
    string subject;
};


class Teacher : public Person{
public:

    double salary;

    Teacher(string name, string subject, double salary){
        this->name = name;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(){
        cout<< "Parent Constructors\n";
    }

};


class Students : public Teacher{
public:
    double roll;

    Students(string name, int age, double roll): public Teacher(name, age){
        this->roll = roll;
        cout<< "Child Constructors\n";
    }

    void getInfo(){
        cout<< "Name of Pet: "<< name<<endl;
        cout<< "Age of Pet: "<< subject<<endl;
        cout<< "Category of Pet: "<< roll<<endl;
    }
};


class TeacherAssistance : public Teacher, public Students {

};


int main(){
    TeacherAssistance p1 ("Musk", 28, "Particle Physics");
    p1.getInfo();

    
    return 0;
}