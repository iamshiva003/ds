// 17.write a c program to sort a list of N elements using Merge sort technique.
#include <stdio.h>

void mergeSort(int a[], int low, int mid, int high)
{
    int c[20], i ,j, k;

    i = low;
    j = mid+1;
    k = low;

    while((i <= mid) && (j <= high))
    {
        if(a[i] < a[j])
            c[k++] = a[i++];
        else
            c[k++] = a[j++];
    }

    while(i <= mid)
        c[k++] = a[i++];
    while(j <= high)
        c[k++] = a[j++];
    for(i=low; i<=high; i++)
        a[i] = c[i];
}

void merge(int a[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;
        merge(a, low, mid);
        merge(a, mid+1, high);
        mergeSort(a, low, mid, high);
    }
}

int main()
{
    int a[20], n, i;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements into the array: \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    printf("Before sorting: \n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    merge(a, 0, n-1);
    printf("After sorting: \n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
    
    return 0;
}