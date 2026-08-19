#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int main(){
    int a = 10, b = 3, c = 7;

    cout<< sum(a, b) <<endl;

    cout<< sum(a, b, c) <<endl;


    return 0;
}