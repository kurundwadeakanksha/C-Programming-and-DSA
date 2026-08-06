# Algorithm

# Priority Queue 

1] Initialize Priority Queue
1. Set capacity = SIZE .
2. Set size = 0 .
3. Priority Queue is ready for use.

2] Check Queue Full
1. If size == capacity
Return True.
2. Otherwise
Return False.

3] Check Queue Empty 
1. If size == 0
Return True.
2. Otherwise
Return False.

4] Enqueue (Insertion)
1. Check if the priority queue is full.
2. If full:
Display “Queue is Full”.
Return.
3. Find the correct position based on the priority.
4. Shift all elements one position to the right to create space.
5. Insert the new element (value, priority) at the correct position.
6. Increment the queue size by 1 .

5] Dequeue (Deletion)
1. Check if the priority queue is empty.
2. If empty:
Display “Queue is Empty”.
Return.
3. Store the first element (highest priority) in a temporary variable.
4. Shift all remaining elements one position to the left.
5. Decrement the queue size by 1 .
6. Return the deleted element.

6] Display Priority Queue
1. Display “Priority Queue :”.
2. Traverse the queue from index 0 to size - 1 .
3. Display the value and priority of each element.
4. Stop after displaying all elements.