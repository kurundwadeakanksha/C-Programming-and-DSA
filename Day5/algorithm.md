# Algorithm

# Bubble Sort
1.Read size of array.
2.Read array elements.
3.Print before sorting array elements.
4.Call function insertion_sort()
    i]Repeat from i=0 to size-2.
    ii]Compare each adjacent pair of elements from index 0 to size-i-2.
    iii]If the left element is greater than the right element,swap them.
    iv]After each pass, the largest element reaches its correct position.
    v]Repeat until all passes are completed.
    vi]Display the total number of passes and comparisons performed.
5.Print After Sorting array elements. 
6.Return 0.
7.Stop


# Insertion Sort
1.Read size of array.
2.Read array elements.
3.Print before sorting array elements.
4.Call function insertion_sort()
    i]consider the first element as already sorted.Start from the second element.
    ii]Store the current element in a temporary variable (key).
    iii]Compare the key with the element from right to left.
    iv]Shift the larger element one position to the right.
    v]Insert the key at its correct position.
    vi]Display the total number of passes and comparisons performed.
5.Print After Sorting array elements. 
6.Return 0.
7.Stop


# Selection Sort
1.Read size of array.
2.Read array elements.
3.Print before sorting array elements.
4.Call function selection_sort()
    i]Repeat from i=0 to size-2
    ii]Compare arr[i] with every element from i+1 to size-1.
    iii]If arr[j] is smaller than arr[i],immediately swap arr[i] and arr[j].
    iv]Repeat until all passes are completed.
    v]Display the total number of passes and comparisons performed.
5.Print After Sorting array elements. 
6.Return 0.
7.Stop