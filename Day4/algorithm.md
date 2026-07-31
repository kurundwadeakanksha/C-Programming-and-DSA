# Algorithm

# Linear Search
1.Read size of array.
2.Read array elements.
3.print array elements.
4.Read key element to be search.
5.In linear_search() function:
     i)Start from the first element of the array.
    ii)Compare the current element with the key.
   iii)If the current element matches the key, return its index.
    iv)Otherwise,move to the next element.
     v)Repeat step ii) to iv) until all element are checked.
    vi)If the key is not found after checking all elements,return -1.
6.Stop.

# Binary Search
1.Read size of array.
2.Read sorted array elements.
3.print array elements.
4.Read key element to be search.
5.In binary_search() function:
    i)Set the beginning point at the start of the collection.
    ii)Set the ending point at the last of the collection.
    iii)Repeat the following steps while the beginning point is before or at the ending point:
         1.find middle position between the beginning and the end
         2.check the item at the middle:
         3.if it matches the key, the item is found
         4.if key is greater than middle element,move the beginning point just after the middle
         5.if key is smaller than middle element,move the end point just before the middle  
    iv)if the beginning point crosses the end point,say element is not found.
6.stop.
