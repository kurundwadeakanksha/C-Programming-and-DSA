#include<stdio.h>
void selection_sort(int arr[],int size);
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
    selection_sort(arr,size);
    printf("\nAfter sorting:");
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
void selection_sort(int arr[],int size)
{
    int i,j;
    int pass=0,comp=0;
    for(i=0; i<size-1; i++)
    {
        pass++;
        for(j=i+1; j<size; j++)
        {
            comp++;
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nNumber of passes:%d",pass);
    printf("\nNumber of comparisons:%d",comp);
    return;
}
