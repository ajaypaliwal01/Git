// Python program for implementation of Bubble Sort
def bubbleSort(arr):
    n = len(arr)
    // # optimize code, so if the array is already sorted, it doesn't need
    // # to go through the entire process
    swapped = False
    // # Traverse through all array elements
     for i in range(n-1):
        // # range(n) also work but outer loop will
        // # repeat one time more than needed.
        // # Last i elements are already in place
        for j in range(0, n-i-1):