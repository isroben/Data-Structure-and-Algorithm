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

    void getInfo(){
        cout << name<<endl;
        cout << subject<<endl;
        cout << salary<<endl;
    }
};



int main(){
    // For Non-parameterized Constructors;
    Teacher t1;  //constructor call
    cout<<"Non-Parameterized Constructor"<<endl;
    t1.name = "Roben";
    t1.subject = "Mathematics";
    t1.dept = "Computer Science";


    Teacher t1("Krish", "Mathematics", "Linear Algebra", 57000); // Value Initialization for Parameterized Constructor;
    cout<< "Parameterized Constructor"<<endl;
    t1.getInfo();

    return 0;
}