#include<stdio.h>
void insertion_sort(int arr[],int size)
{
    int i,j;
    int pass=0,comp=0;
    for(i=1; i<size; i++)
    {
        pass++;
        int key=arr[i];
        for(j=i-1; j>=0 && key<arr[j]; j--)
        {
            comp++;
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    printf("\n Passes=%d",pass);
    printf("\n Comparisons=%d",comp);
    return;
}
int main()
{
    int size;
    printf("Enter the size of array:");
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
    insertion_sort(arr,size);
    printf("\nAfter sorting:");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}