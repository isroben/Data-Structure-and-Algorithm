#include<iostream>
using namespace std;

void printNums(int n){
    if(n == 1){
        cout<<n<<"\n";
        return;
    }
    cout<<n<<" ";
    printNums(n-1);
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    return n + sum(n-1);
}

int main(){
    printNums(5);

    cout<<factorial(5)<<endl;

    cout<<sum(5)<<endl;

    return 0;
}