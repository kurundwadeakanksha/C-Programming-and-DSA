#include<stdio.h>
#define SIZE 5

struct stack
{
    int arr[SIZE];
    int top;
};

void init_stack(struct stack *sp)
{
    sp->top = -1;
}

int stack_full(struct stack *sp)
{
    if (sp->top == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *sp, int data)
{
    if(stack_full(sp))
    {
        printf("Stack is full\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = data;
    }
}

int stack_empty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pop(struct stack *sp)
{
    if(stack_empty(sp))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped element: %d\n", sp->arr[sp->top]);
        sp->top--;
    }
}

int peek(struct stack *sp)
{
        return sp->arr[sp->top];
}

int main()
{
    int choice, data;
    struct stack s1;
    init_stack(&s1);
    do
    {
        printf("\n 0.Exit\n");
        printf(" 1.Push\n");
        printf(" 2.Pop\n"); 
        printf(" 3.Peek\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);   

        switch (choice)
        {
            case 0: printf("Exiting...\n");
                break;
            case 1:printf("Enter data to push: ");
                   scanf("%d", &data);
                   push(&s1, data);
                break;
            case 2:pop(&s1);
                break;
            case 3:if(stack_empty(&s1))
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Top element: %d\n", peek(&s1));
                }
                break;
            default:
                printf("Invalid choice\n");
        }
        printf("Stack elements: ");
        for(int i = 0; i <= s1.top; i++)
        {
            printf("%d ", s1.arr[i]);
        }   
    } while (choice != 0);
    return 0;
}
