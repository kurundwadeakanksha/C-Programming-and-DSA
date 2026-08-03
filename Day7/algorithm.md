# Algorithm

# Queue Operations

1. isFull (Check if the queue has no space left)
1] Start.
2] If rear has reached the last allowed position, then the queue is full.
3] Stop.

2. Enqueue(Insert an item at the rear)
1]Star.
2]Check if the queue is full.
3]If full,show an error message and stop.
4]Otherwise,move the rear position forward by one.
5]Place the new item at the rear position.
6]Stop

3. isEmpty (Check if the queue has no items)
1] Start.
2] If front and rear are equal, then the queue is empty.
3] Stop.

4. Dequeue (Remove an item from the front)
1]Start.
2]Check if the queue is empty.
3]If empty, show an error message and stop.
4] Otherwise, remove the item from the front.
5] Move the front position forward by one.
6] If front goes past rear (no items left), reset front and rear to initial positions.
7] Stop.

5. Peek or Front (View the first item without removing it)
1] Start.
2] Check if the queue is empty.
3]If empty, show an error message and stop.
4] Otherwise, return the item at the front position.
5] Stop.