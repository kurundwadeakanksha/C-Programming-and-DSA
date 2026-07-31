#include<stdio.h>
int linear_search(int arr[],int size,int key);
int main()
{
    int size,key,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elments are:");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the key element to be searched:");
    scanf("%d",&key);
   int result = linear_search(arr,size,key);
    if(result == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d", result);
    }
    return 0;
}
int linear_search(int arr[],int size,int key)
{
     int i;
     for(i=0; i<size; i++)
     {
        if(key == arr[i])
        {
           return i;
        }
     }
     return -1;
}