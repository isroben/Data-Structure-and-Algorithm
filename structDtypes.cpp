#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct employee{
    int emp_id;
    string name;
    string address;
    float salary;
}st[5];

int main(){
    cout<<"Enter the details of employees: "<<endl;
    for(int i=0; i<5; i++){
        cin>>st[i].emp_id;
        cin>>st[i].name;
        cin>>st[i].address;
        cin>>st[i].salary;
        cout<<endl;
    }

    cout<<"Printing records of employees"<<endl;
    for(int i=0; i<5; i++){
        cout<<st[i].emp_id<<" ";
        cout<<st[i].name<<" ";
        cout<<st[i].address<<" ";
        cout<<st[i].salary<<" "<<endl;
    }
    return 0;
}