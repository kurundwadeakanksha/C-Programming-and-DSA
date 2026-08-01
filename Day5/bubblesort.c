#include<stdio.h>
void bubble_sort(int arr[],int size)
{
    int i,j;
    int pass=0,comp=0;
    for(i=0; i<size-1; i++)
    {
        pass++;
        for(j=0; j<size-i-1; j++)
        {
            comp++;
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n Passes=%d",pass);
    printf("\n Comparisons=%d",comp);
    return;
}
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size],i;
    printf("Enter the array elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting:");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    bubble_sort(arr,size);
    printf("\nAfter sorting:");
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}