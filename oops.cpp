#include <bits/stdc++.h>

using namespace std;

class Teacher {
private:
    double salary;

public:
    Teacher(){  // Non-parameterized or default Constructor;
        cout<<"Hi, I am constructor\n";
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

    void getInfo(){
        cout << name<<endl;
        cout << subject<<endl;
        cout << getSalary()<<endl;
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
    Teacher t1;  //constructor call
    t1.name = "Roben";
    t1.subject = "Mathematics";
    t1.dept = "Computer Science";
    t1.setSalary(57000);

    return 0;
}