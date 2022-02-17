// 16.Write a c program to sort a given list by Bubble sort.
#include <stdio.h>

int main()
{
    int n, temp;
    int arr[20];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements into the array: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for (int j=1; j<n; j++)
        for (int i=0; i<n-j; i++)
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }

    printf("After sorting: \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}