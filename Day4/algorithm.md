# Algorithm

# Linear Search
1.Read size of array.<br>
2.Read array elements.<br>
3.print array elements.<br>
4.Read key element to be search.<br>
5.In linear_search() function:<br>
     i)Start from the first element of the array.<br>
    ii)Compare the current element with the key.<br>
   iii)If the current element matches the key, return its index.<br>
    iv)Otherwise,move to the next element.<br>
     v)Repeat step ii) to iv) until all element are checked.<br>
    vi)If the key is not found after checking all elements,return -1.<br>
6.Stop.<br>

# Binary Search
1.Read size of array.<br>
2.Read sorted array elements.<br>
3.print array elements.<br>
4.Read key element to be search.<br>
5.In binary_search() function:<br>
    i)Set the beginning point at the start of the collection.<br>
    ii)Set the ending point at the last of the collection.<br>
    iii)Repeat the following steps while the beginning point is before or at the ending point:<br>
         1.find middle position between the beginning and the end<br>
         2.check the item at the middle:<br>
         3.if it matches the key, the item is found<br>
         4.if key is greater than middle element,move the beginning point just after the middle<br>
         5.if key is smaller than middle element,move the end point just before the middle  <br>
    iv)if the beginning point crosses the end point,say element is not found.<br>
6.stop.<br>
