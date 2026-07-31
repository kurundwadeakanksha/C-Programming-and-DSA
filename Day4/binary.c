#include<stdio.h>
int binary_search(int arr[],int size,int key);
int main()
{
    int size,key,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements in sorted order:");    
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
    int result = binary_search(arr,size,key);
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
int binary_search(int arr[],int size,int key)
{
    int left = 0, right = size - 1, mid;
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
