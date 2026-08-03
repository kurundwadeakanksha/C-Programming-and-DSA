# Algorithm

# Queue Operations

1. isFull (Check if the queue has no space left)<br>
1] Start.<br>
2] If rear has reached the last allowed position, then the queue is full.<br>
3] Stop.<br>

2. Enqueue(Insert an item at the rear)<br>
1]Star.<br>
2]Check if the queue is full.<br>
3]If full,show an error message and stop.<br>
4]Otherwise,move the rear position forward by one.<br>
5]Place the new item at the rear position.<br>
6]Stop<br>

3. isEmpty (Check if the queue has no items)<br>
1] Start.<br>
2] If front and rear are equal, then the queue is empty.<br>
3] Stop.<br>

4. Dequeue (Remove an item from the front)<br>
1]Start.<br>
2]Check if the queue is empty.<br>
3]If empty, show an error message and stop.<br>
4] Otherwise, remove the item from the front.<br>
5] Move the front position forward by one.<br>
6] If front goes past rear (no items left), reset front and rear to initial positions.<br>
7] Stop.<br>

5. Peek or Front (View the first item without removing it)<br>
1] Start.<br>
2] Check if the queue is empty.<br>
3]If empty, show an error message and stop.<br>
4] Otherwise, return the item at the front position.<br>
5] Stop.<br>
