# Algorithm

# Circular Queue

1] Initialize Queue<br>
A] queueInit()
1. Start.
2. Allocate memory for the queue of the given size.
3. Store the queue size.
4. Set front = -1.
5. Set rear = -1.
6. Stop.

2] Enqueue (Insert)<br>
B] enqueue()
1. Start.
2. Check whether the queue is full.
3. If the queue is full, display "Queue is full" and return.
4. Update rear = (rear + 1) % size.
5. Insert the new element at arr[rear].
6. Stop.

3] Dequeue (Delete)<br>
C] dequeue()
1. Start.
2. Check whether the queue is empty.
3. If the queue is empty, display "Queue is empty" and return.
4. Store the element at (front + 1) % size.
5. Update front = (front + 1) % size.
6. If front == rear:
Set front = -1.
Set rear = -1.
7. Return the deleted element.
8. Stop.

4] Peek<br>
D] peek()
1. Start.
2. Check whether the queue is empty.
3. If the queue is empty, display "Queue is empty" and return.
4. Return the element at (front + 1) % size.
5. Stop.

5] Check Queue is Empty<br>
E] isEmpty()
1. Start.
2. If front == -1 and rear == -1, return True.
3. Otherwise, return False.
4. Stop.

6] Check Queue is Full<br>
F] isFull()
1. Start.
2. If front == -1 and rear == size - 1, return True.
3. Else if front == rear and rear != -1, return True.
4. Otherwise, return False.
5. Stop.
