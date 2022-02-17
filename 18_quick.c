// 18.write a c program to sort a list of N elements using Quick sort technique.
#include <stdio.h>

int partition(int a[], int low, int high)
{
    int i, j;
    int temp, pivot;

    i = low+1;
    pivot = a[low];
    j = high;

    while(1)
    {
        while((i < high) && (a[i] < pivot))
            i++;
        while(a[j] > pivot)
            j--;
        
        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } 
        else
        {
            temp = a[low];
            a[low] = a[j];
            a[j] = temp;
            return j;
        }
    }
}

void quick(int a[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = partition(a, low, high);
        quick(a, low, mid-1);
        quick(a, mid+1, high);
    }
}

int main()
{
    int a[20], n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements into the array: \n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Before sorting \n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");

    quick(a, 0, n-1);
    printf("After sorting \n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}