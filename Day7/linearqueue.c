#include<stdio.h>

#define SIZE 5

typedef struct linear_queue
{
    int arr[SIZE];
    int front;
    int rear;
}linear_t;

void init_queue(linear_t *sq1)
{
    sq1->front = -1;
    sq1->rear = -1;
}

int queue_full(linear_t *sq1)
{
    if(sq1->rear == SIZE-1)
        return 1;
    else
        return 0;
}

void enqueue(linear_t *sq1, int data)
{
    if(sq1->front == -1 && sq1->rear == -1)
    {
        sq1->front = 0;
    }
    sq1->rear++;
    sq1->arr[sq1->rear] = data;
}

int queue_empty(linear_t *sq1)
{
    if(sq1->rear == -1 || sq1->front > sq1->rear)
        return 1;
    else
        return 0;
}

void dequeue(linear_t *sq1)
{
    int temp = sq1->arr[sq1->front];
    printf("Dequeued element is %d\n", temp);
    sq1->front++;
    if(sq1->front > sq1->rear)
    {
        sq1->front = -1;
        sq1->rear = -1;
    }
}

int peek(linear_t *sq1)
{
    return sq1->arr[sq1->front];
}

void queue_display(linear_t *sq1)
{
    int i;
    for(i = sq1->front; i <= sq1->rear; i++)
    {
        printf("%d ", sq1->arr[i]);
    }
    printf("\n");
}

int main()
{
    linear_t q1;
    int choice,data;
    init_queue(&q1);
    do
    {
        printf("0.Exiting\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");  
        printf("3.Peek\n");
        printf("4.Display Queue\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:printf("Exiting...\n");
                break;
            case 1:if(queue_full(&q1))
                {
                    printf("Queue is full\n");
                }
                else
                {
                    printf("Enter the data to be inserted: ");
                    scanf("%d",&data);
                    enqueue(&q1,data);
                }
                break;
            case 2:if(queue_empty(&q1))
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    dequeue(&q1);
                }
                break;
            case 3:if(queue_empty(&q1))
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    printf("Peek element is %d\n",peek(&q1));
                }
                break;
            case 4:if(queue_empty(&q1))
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    queue_display(&q1);
                }
                break;
            default:printf("Invalid choice\n");
        }
    } while (choice !=0);
    return 0;
}