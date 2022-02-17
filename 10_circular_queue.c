// 10. Write a C program to implement Circular Queue
#include <stdio.h>
#include <stdlib.h>
int q[50], front=0, rear=-1, size, count=0;

void insert()
{
    int item;

    if (count == size)
    {
        printf("C Queue is Full \n");
        return;
    }
    printf("Enter the item in to Queue: ");
    scanf("%d", &item);

    rear = (rear + 1) % size;
    q[rear] = item;
    count++;
}

void delete()
{
    if(count == 0)
    {
        printf("C Queue is empty \n");
        return;
    }
    printf("Item deleted: %d\n",q[front]);
    front = (front + 1) % size;
    count--;
}

void display()
{
    if (count == 0)
    {
        printf("C Queue is empty \n");
        return;
    }
    printf("The elements in Queue are: \n");
    if(front <= rear)
        for(int i=front; i<=rear; i++)
            printf("%d\n",q[i]);

    else
    {
        for(int i=front; i<=size; i++)
            printf("%d\n",q[i]);
        for(int i=0; i<=rear; i++)
            printf("%d\n",q[i]);
    }
    printf("\n");
}

int main()
{
    int choice;

    printf("Enter the size of the Queue: ");
    scanf("%d", &size);
    printf("---- CIRCULAR QUEUE OPERATIONS ---- \n");
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