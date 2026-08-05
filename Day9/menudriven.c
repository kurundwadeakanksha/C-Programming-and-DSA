#include<stdio.h>

void bubblesort(int arr[], int size)
{
    int i,j;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   return;
}

void selectionsort(int arr[], int size)
{
    int i, j;
    for(i=0; i<size-1; i++)
        {
            for(j=i+1; j<size; j++)
            {
                if(arr[j] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        } 
    return;    
}

void insertionsort(int arr[], int size)
{
    int i, j, key;
    for(i=1; i<size; i++)
    {
        key = arr[i];
        for(j=i-1; j>=0 && key < arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
    return;
}

void display(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    int size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size],i;
    printf("Enter the elements of array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting\n");
    display(arr,size);

  do
 {
    printf("====Sorting Menu====\n");
    printf("0. Exit\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Display Sorted Array \n");

    printf("Enter your choice: \n");
    scanf("%d",&choice);   
        switch(choice)
        {
            case 0: printf("Exiting...\n");
                    break;  
            case 1: bubblesort(arr,size);
                    break;
            case 2: selectionsort(arr,size);
                    break;      
            case 3: insertionsort(arr,size);
                    break;  
            case 4: display(arr,size);
                    break;
            default: printf("Invalid choice! Please try again.\n");
        }
    }while(choice != 0);
    return 0;
}