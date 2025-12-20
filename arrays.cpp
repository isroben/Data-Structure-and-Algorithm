#include <iostream>
using namespace std;

void smallest_in_array(int nums[]){
    int smallest = INT32_MAX;
    int size = 6;

    for(int i=0;  i<size; i++){
        if (nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout<<"The smallest number in array: "<<smallest<<endl;

    return;
}



int main(){
    int marks[5];

    double sizes[100];

    double price[5] = {100, 110, 120, 130, 140};

    for (int i=0; i<5; i++){
        cin>>marks[i];
    }
    
    // Array indexing
    for (int i=0; i<5; i++){
        cout<< "The array's are: "<< marks[i] <<endl;
    }

    int nums[] = {5, 15, 22, 1, -15, 24};
    smallest_in_array(nums);


    return 0;
}