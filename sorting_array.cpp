#include<iostream>
using namespace std;

int  main(){
    int arr[5] = {5, 2, 9, 7, 1};

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[j] < arr[i]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}