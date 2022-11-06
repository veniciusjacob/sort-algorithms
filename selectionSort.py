def selectionSort(A):
    size = len(A)
    #one by one move for unsorted subarray
    for i in range(size - 1):
        #find the minumun element in unsorted array
        minimum_index = i
        #select the minumun element in each loop
        for j in range(i + 1, size):
            if A[j] < A[minimum_index]:
                minimum_index = j
        #put the minumun element in the correct place        
        A[i], A[minimum_index] = A[minimum_index], A[i]

#driver code
arr = [5, 2, 4, 6, 1, 3]
selectionSort(arr)
print(arr)
