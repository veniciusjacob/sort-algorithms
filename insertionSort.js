const insertionSort = A => {
    size = A.length;
    for(let i = 1; i < size; i++) {
        key = A[i]
        j = i - 1;

        while(j >= 0 && A[j] > key){
            A[j + 1] = A[j]
            j--;

        }
        A[j+1] = key
    }
}



const arr = [5, 2, 4, 6, 1, 3];
insertionSort(arr);
console.log(arr);
