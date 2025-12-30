#include<stdio.h>

void sum_product(){
    int marks[5] = {2, 4, 6, 8, 10};

    int sum = 0, product = 1;
    for(int i=0; i<5; i++){
        sum += marks[i];
        product *= marks[i];
    }
    printf("The Sum of terms of array is: %d",sum);
    printf("\nThe Product of terms of array is: %d",product);

    printf("ENd");

    return;
}

int main(){
    sum_product();

    return 0;
}