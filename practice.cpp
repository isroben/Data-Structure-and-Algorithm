#include <iostream>
using namespace std;

void triangle_pattern(){
    int n = 4;

    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    cout<<endl;

    char ch='A';
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<ch;
        }
        cout<<endl;
        ch += 1;
    }
    cout<<endl;

    for(int i =0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<j+1;
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        for (int j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;

    int num = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<num;
            num += 1;
        }
        cout<<endl;
    }

    
    return;
}




int main(){
    triangle_pattern();

    cout<<endl;

    int n = 145;
    int remainder;
    int reversed = 0;

    for(int i=0; i<3; i++){
        remainder = n%10;
        n /= 10;
        reversed = (reversed * 10) + remainder;
    }
    cout<<reversed;

    return 0;
}