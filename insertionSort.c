#include <stdio.h>

int insertionSort(int A[], int size){
    for(int i = 1; i < size; i++){
        int key = A[i]; // chave atual
        int j = i - 1; // index anterior a chave atual

        while (j >= 0 && A[j] > key){  //compara o anterior a chave atual
            A[j + 1] = A[j];
            j--; //condição de parada
        }
        A[j + 1] = key;
    }
}

void printArray(int arr[], int size){
    for(int k = 0; k < size; k++){
        printf("%d, ", arr[k]);
    }
}


int main(){
    int arr[] = {5, 2, 4, 6, 1, 3};
    int len = sizeof(arr)/ sizeof(int);

    insertionSort(arr, len);
    printArray(arr, len);

    return 0;
}