#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int A[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(A[j] > A[j + 1]){
                swap(&A[j], &A[j+1] );
            }
        }
    }
}

void printArray(int A[], int size){
    for(int k = 0; k < size; k++){
        printf("%d, ", A[k]);
    }
}


int main(){
    int arr[]= {5, 2, 4, 6, 1, 3};
    int len = sizeof(arr)/sizeof(int);
    bubbleSort(arr, len);
    printArray(arr, len);
    return 0;
}