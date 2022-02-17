// 8.write a c program to simulate the working of an ordinary queue using an array. Provide operations 
//   1.INSERT 2.DELETE 3.DISPLAY
#include <stdio.h>
#include <stdlib.h>
int q[50], front=0, rear=-1, size;

void insert()
{
    int item;
    if(rear == size-1)
    {
        printf("Queue is full \n");
        return;
    }
    printf("Enter the item in to Queue: ");
    scanf("%d", &item);
    q[++rear] = item;
}

void delete()
{
    if(front > rear)
    {
        printf("Queue is empty \n");
        return;
    }
    printf("Item deleted: %d\n",q[front]);
    front++;
}

void display()
{
    if (front > rear)
    {
        printf("Queue is empty \n");
        return;
    }
    printf("The elements in Queue are: \n");
    for(int i=front; i<=rear; i++)
        printf("%d\n",q[i]);
    printf("\n");
}

int main()
{
    int choice;

    printf("Enter the size of the Queue: ");
    scanf("%d", &size);
    printf("---- QUEUE OPERATIONS ---- \n");
    while(1)
    {
        printf("\n1.INSERT \n2.DELETE \n3.DISPLAY \n4.EXIT \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}