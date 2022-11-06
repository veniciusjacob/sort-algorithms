const bubbleSort = A => {
    const size = A.length
    for(let i = 0; i < size - 1; i++) {
        for(let j = 0; j < size - 1; j++) {
            if(A[j] > A[j + 1]){
                let temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }       
}

arr = [5, 2, 4, 6, 1, 3]
bubbleSort(arr)
console.log(arr)