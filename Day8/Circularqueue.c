#include<stdio.h>
#define SIZE 5

typedef struct
{
    int arr[SIZE];
    int front;
    int rear;
}cirq_t;

void init_queue(cirq_t *q)
{
    q->front = -1;
    q->rear = -1;
}

int check_full(cirq_t *q)
{
    if(q->rear == SIZE -1 && q->front == 0)
        return 1;
    else
        return 0;
}

void enqueue(cirq_t *q, int data)
{
    if(q->front == -1 && q->rear == -1)
    {
        q->front = 0;
        q->rear = 0;
        
        q->arr[q->rear] = data;
    }
    else
    {
        q->rear = (q->rear +1) % SIZE;
        q->arr[q->rear] = data;
    }
}

int check_empty(cirq_t *q)
{
    if(q->front == -1)
        return 1;
    else
        return 0;
}

void dequeue(cirq_t *q)
{
    int temp = q->arr[q->front];
    printf("Deleted element is %d\n", temp);
    if(q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % SIZE;
    }
}

int peek(cirq_t *q)
{
    return q->arr[q->front];
}

void display(cirq_t *q)
{
    int i;
    if(check_empty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    for(i = q->front; i != q->rear; i = (i + 1) % SIZE)
    {
        printf("%d ", q->arr[i]);
    }
    printf("%d\n", q->arr[q->rear]);
}

int main()
{
    cirq_t q;
    int choice, data;
    init_queue(&q);
    do
    {
         printf("0. Exit\n");
         printf("1. Enqueue\n");   
         printf("2. Dequeue\n");
         printf("3. Peek\n");
         printf("4. Display\n");

         printf("Enter your choice: ");
         scanf("%d", &choice);
         switch(choice)
         {
            case 0:
                 printf("Exiting...\n");
                 break;
             case 1:if(check_full(&q))
                   {
                       printf("Queue is full\n");
                   }
                   else
                   {
                       printf("Enter data to enqueue: ");
                       scanf("%d", &data);
                       enqueue(&q, data);
                   }
                 break;
             case 2:if(check_empty(&q))
                     {
                         printf("Queue is empty\n");
                     }
                     else
                     {
                         dequeue(&q);
                     }
                 break;
             case 3:
                 if(check_empty(&q))
                    printf("Queue is empty\n");
                 else
                      printf("Front element is %d\n", peek(&q));
                 break;
             case 4:
                    display(&q);
                    break;
             default:
                 printf("Invalid choice\n");
         }
    } while (choice != 0);
   return 0; 
}