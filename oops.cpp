#include <bits/stdc++.h>

using namespace std;

class Teacher {
private:
    double salary;

public:
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

int main(){

    Teacher t1;
    t1.name = "Roben";
    t1.subject = "Mathematics";
    t1.dept = "Computer Science";
    t1.salary = 57000;

    cout << t1.name<<endl;

    return 0;
}