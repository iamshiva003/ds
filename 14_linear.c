// 14.Write a c program to implement Sequential search technique using static array and pointers.
#include <stdio.h>

int main()
{
    int key, n, pos=0;
    int arr[20];
    int *a;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements in to the array: \n");
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    printf("\nThe array is: \n");
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");

    printf("\nEnter the item to be searched: ");
    scanf("%d",&key);

    a = arr;
    for(int i=0; i<n; i++) {
        if(key == (*a)) {
            pos = i+1;
        }
        a++;
    }

    if(pos == 0)
        printf("Item not found \n");
    else
        printf("Item found found at position: %d \n",pos);

    return 0;
}