#include<stdio.h>
#define SIZE 5
typedef struct item{
    int value;
    int priority;
}item_t;
typedef struct priority_queue{
    item_t items[SIZE];
    int capacity;
    int size;
}PriQue_t;
void init_queue(PriQue_t *q){
    q->capacity = SIZE;
    q->size = 0;
}
int queue_full(PriQue_t *q){
    if(q->size == q->capacity)
        return 1;
    else
        return 0;
}
int queue_empty(PriQue_t *q){
    if(q->size == 0)
        return 1;
    else
        return 0;
}
void enqueue(PriQue_t *q, int value, int priority){
    if(queue_full(q)){
        printf("Queue is full\n");
        return;
    }
    item_t new_item;
    new_item.value = value;
    new_item.priority = priority;
    q->items[q->size] = new_item;
    q->size++;
}
void dequeue(PriQue_t *q){
    if(queue_empty(q)){
        printf("Queue is empty\n");
        return;
    }
    int highest_priority_index = 0;
    for(int i = 1; i < q->size; i++){
        if(q->items[i].priority > q->items[highest_priority_index].priority){
            highest_priority_index = i;
        }
    }
    printf("Dequeued item: %d with priority: %d\n", q->items[highest_priority_index].value, q->items[highest_priority_index].priority);
    for(int i = highest_priority_index; i < q->size - 1; i++){
        q->items[i] = q->items[i + 1];
    }
    q->size--;
}
void display_queue(PriQue_t *q){
    if(queue_empty(q)){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue contents:\n");
    for(int i = 0; i < q->size; i++){
        printf("Value: %d, Priority: %d\n", q->items[i].value, q->items[i].priority);
    }
}

int main()
{
    PriQue_t queue;
    int choice, value, priority;
    init_queue(&queue);
    do
    {
        printf("\nPriority Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                printf("Enter priority: ");
                scanf("%d", &priority);
                enqueue(&queue, value, priority);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                display_queue(&queue);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(choice != 4);
return 0;
}