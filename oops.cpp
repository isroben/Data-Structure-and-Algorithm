#include <bits/stdc++.h>

using namespace std;

class Teacher {
private:
    double salary;

public:
    // Teacher(){  // Non-parameterized or default Constructor;
    //     cout<<"Hi, I am constructor\n";
    // }

    Teacher(string n, string d, string s, double sal){ // Parameterized constructor;
        name = n;
        dept = d;
        subject = s;
        salary = sal;

    }

    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }
    // setter --> sets privates values
    void setSalary(double s){
        salary = s;
    }
    // getter --> gets the values of private values
    double getSalary(){
        return salary;
    }
};

class Student {
    string name;
    int roll;
    int age;
};

class Account {
private:    // data hiding
    double blance;
    string password;

public:
    string acountId;
    string username;

};

int main(){
    // For Non-parameterized Constructors;
    // Teacher t1;  //constructor call
    // t1.name = "Roben";
    // t1.subject = "Mathematics";
    // t1.dept = "Computer Science";
    // t1.setSalary(57000);

    // For Parameterized Constructor;
    Teacher t1("Shyam", "Mathematics", "Linear Algebra", 57000);

    cout << t1.name<<endl;
    cout << t1.subject<<endl;
    cout << t1.getSalary()<<endl;

    return 0;
}