#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectioSort(int A[], int size){
    //one by one move for unsorted subarray
    for(int i = 0; i < size - 1; i++){
        //find the minumun element in unsorted array
        int minimum_index = i;
        // select the minumun element in each loop
        for(int j = i + 1; j < size; j++){
            if(A[j] < A[minimum_index]){
                minimum_index = j;
            }
        } 
        //put the minumun element in the correct place
        swap(&A[i], &A[minimum_index]);
    }
}

void printArray(int A[], int size){
    for(int k = 0; k < size; k++){
        printf("%d, ", A[k]);
    }
}

int main(){
    int arr[] = {5, 2, 4, 6, 1, 3};
    int len = sizeof(arr)/ sizeof(int);

    selectioSort(arr, len);
    printArray(arr, len);

    return 0;
}