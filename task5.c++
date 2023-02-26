// Python program for implementation of Bubble Sort
def bubbleSort(arr):
    n = len(arr)
    // # optimize code, so if the array is already sorted, it doesn't need
    // # to go through the entire process
    swapped = False
    // # Traverse through all array elements