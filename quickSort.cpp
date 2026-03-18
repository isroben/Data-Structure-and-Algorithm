#include<iostream>
#include<vector>

int partition(std::vector<int> &arr, int st, int end){
    int idx = st-1, pivot = arr[end];

    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            std::swap(arr[j], arr[idx]);
        }
    }
    idx++;
    std::swap(arr[end], arr[idx]);

    return idx;
}

void quickSort(std::vector<int> &arr, int st, int end){
    if(st < end){
        int pivIdx = partition(arr, st, end);

        quickSort(arr, st, pivIdx-1);
        quickSort(arr, pivIdx+1, end);
    }
}

int main(){
    std::vector<int> arr = {18, 12, 14, 8, 5, 25, 31, 24, 27};
    quickSort(arr, 0, arr.size()-1);

    for(int val: arr){
        std::cout << val << " ";
    }
    std::cout<< std::endl;

    return 0;
}