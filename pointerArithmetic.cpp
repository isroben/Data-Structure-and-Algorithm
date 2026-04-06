#include<iostream>
using namespace std;

int main(){
    int arr[6] = {4, 9, 2, 0, 5, 7};

    int* ptr = arr;

    for(int i=0; i<6; i++){
        cout<< *(ptr) <<endl;
        ptr++;
    }

    return 0;
}