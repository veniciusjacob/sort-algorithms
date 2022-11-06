def bubbleSort(A):
    size = len(A)
    for i in range(0, size - 1): #varia de 0 até o penultimom pois o ultimo nnão tem nada pra comparar
        for j in range(0, size - 1):
            if A[j] > A[j + 1]:
                #swap
                # temp = A[j]
                # A[j] = A[j + 1]
                # A[j + 1] = temp

               A[j], A[j + 1] = A[j + 1], A[j] 


arr = [5, 2, 4, 6, 1, 3]
bubbleSort(arr)
print(arr) 