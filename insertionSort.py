def insertionSort(A):
    size = len(A)
    for i in range(1, size):
        key = A[i]
        j = i - 1

        while j >= 0 and A[j] > key :
            A[j+1] = A[j]
            j = j - 1  #condição de parada 
        A[j+1] = key


arr = [5, 2, 4, 6, 1, 3]
insertionSort(arr)
print(arr)