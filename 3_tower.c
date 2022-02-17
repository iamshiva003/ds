// 3.write a c program to simulate the working of tower of hannoi problem for N disks. print the total no of 
//   moves taken by the program.
#include <stdio.h>
int count=0;

void tower(int n, char source, char temp, char destination)
{
    if(n == 0)
        return;
    
    tower(n-1, source, destination, temp);
    printf("Move disk %d from %c to %c \n", n, source, destination);
    count++;
    tower(n-1, temp ,source, destination);
}

int main()
{
    int n;

    printf("Enter the total no of disks: ");
    scanf("%d",&n);

    tower(n, 'A', 'B', 'C');
    printf("\nThe total moves taken are: %d\n",count);
    return 0;
}