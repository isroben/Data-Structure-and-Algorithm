#include <iostream>
using namespace std;

void smallest_in_array(int nums[]){
    int smallest = INT32_MAX;
    int size = 6;

    for(int i=0;  i<size; i++){     // min, max
        if (nums[i] < smallest){
            smallest = nums[i];
        }
        // smallest = min(nums[i], smallest);
    }
    cout<<"The smallest number in array: "<<smallest<<endl;

    return;
}


void largest_in_array(int nums[]){
    int largest = INT32_MIN;
    int size = 6;
    
    for(int i=0; i<size; i++){
        if (nums[i]>largest){
            largest = nums[i];
        }
    }
    cout<< "The largest number in array: "<<largest<<endl;

    return;
}


// Pass by refrence/ passes original address[will reflect in main function]
// array variable --> stores address of memory
void change_array(int arr[], int size){
    for (int i=0; i<size; i++){
        arr[i] = 2* arr[i];
    }

}


int linear_search(int arr[], int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

void reverse_array(){   // Two pointer approach
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int start = 0, end=6;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<7; i++){
        cout<<arr[i];
    }

    return;
}



int main(){
    int marks[5];

    double sizes[100];

    double price[5] = {100, 110, 120, 130, 140};

    // for (int i=0; i<5; i++){
    //     cin>>marks[i];
    // }
    
    // Array indexing
    // for (int i=0; i<5; i++){
    //     cout<< "The array's are: "<< marks[i] <<endl;
    // }

    int nums[] = {5, 15, 22, 1, -15, 24};
    smallest_in_array(nums);
    largest_in_array(nums);

    int arr[] = {1, 2, 3};
    change_array(arr, 3);

    cout<< "In main\n";
    for (int i=0; i<3; i++){
        cout<< arr[i] <<" ";
    }
    cout<< endl;

    cout<<"The index value  of target is: "<<linear_search(nums, 6, 1);
    cout<<"\nThe index value  of target is: "<<linear_search(nums, 6, 90);

    reverse_array();



    return 0;
}