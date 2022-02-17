// 11. Write a C program to implement Priority Queue
#include <stdio.h>
#include <stdlib.h>
int front=0, rear=-1, q[20], size, item;

void insert()
{
    int i;
    if(rear == size-1)
    {
        printf("P Queue is Full \n");
        return;
    }
    
    printf("Enter the item into the Queue: ");
    scanf("%d",&item);
    i=rear;
    while((i >= 0 )&& (item < q[i]))
    {
        q[i+1] = q[i];
        i--;
    }

    
    q[i+1] = item;
    rear++;
}

void delete()
{
    if(front > rear)
    {
        printf("P Queue is empty \n");
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
    printf("---- PRIORITY QUEUE OPERATIONS ---- \n");
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