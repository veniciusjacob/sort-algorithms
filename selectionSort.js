const selectionSort = A => { 
    const size = A.length;
    //one by one move for unsorted subarray
    for(let i = 0; i < size - 1; i++) {
        //find the minumun element in unsorted array
        minimun_index = i;
        // select the minumun element in each loop
        for(let j = i + 1; j < size; j++) {
            if(A[j] < A[minimun_index]) {
                minimun_index = j;
            }   
        }
        //put the minumun element in the correct place
        let temp = A[i];
        A[i] = A[minimun_index];
        A[minimun_index] = temp;
    }
}

let arr = [5, 2, 4, 6, 1, 3];
selectionSort(arr);
console.log(arr);