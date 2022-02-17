// 15.Write a c program to implement Binary search using dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, key, pos=0;
    int low, high, mid;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *) (malloc(sizeof(int)*n));
    printf("Enter the elements in to the array: \n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    printf("The elements in the array are: \n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    low = 0;
    high = n-1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(key == arr[mid]) 
        {
            pos = mid+1;
            break;
        }
        else if(key < arr[mid])
            high = mid-1;
        else if(key > arr[mid])
            low = mid+1;
    }

    if(pos == 0) 
        printf("Item not found \n");
    else
        printf("Item found at position: %d\n", pos);

    return 0;
}