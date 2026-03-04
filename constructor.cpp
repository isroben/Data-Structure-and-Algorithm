#include <bits/stdc++.h>

using namespace std;

class Teacher { // Constructor is only defined as a public object
public:
    string name;
    string dept;
    string subject;
    double salary;


    Teacher(){  // Non-parameterized or default Constructor;
        cout<<"Hi, I am constructor\n";
    }

    Teacher(string name, string dept, string subject, double salary){ // Parameterized constructor;
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;

    }

    Teacher(Teacher &orgObj){ // Pass by reference
        cout <<"I am custom copy constructor\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void getInfo(){
        cout << name<<endl;
        cout << subject<<endl;
        cout << salary<<endl;
    }
};

class Student {
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){ // Dynamic Memory Allocation
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};



int main(){
    // For Non-parameterized Constructors;
    // Teacher t1;  //constructor call
    // cout<<"Non-Parameterized Constructor"<<endl;
    // t1.name = "Roben";
    // t1.subject = "Mathematics";
    // t1.dept = "Computer Science";


    Teacher t1("Krish", "Mathematics", "Linear Algebra", 57000); // Value Initialization for Parameterized Constructor;
    cout<< "Parameterized Constructor"<<endl;
    t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();

    cout<<"\n";

    Student s1("Roben", 8.9);
    s1.getInfo();

    Student s2(s1);
    *s2.cgpaPtr = 9.3;
    s2.getInfo();

    return 0;
}