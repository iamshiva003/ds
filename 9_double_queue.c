// 9. Write a C program to implement Double Ended Queue using Array data structure.
#include <stdio.h>
#include <stdlib.h>
int front=0, rear=-1, q[30], size, item;

void insertRear()
{
    if(rear == size-1)
    {
        printf("Queue is full \n");
        return;
    }

    q[++rear] = item;
}

void insertFront()
{
    if((front == 0) && (rear == -1))
    {
        q[++rear] = item;
        return;
    }
    
    if(front != 0)
    {
        q[--front] = item;
        return;
    }
    printf("Front Insertion is not possible \n");
}

void deleteRear()
{
    if(front > rear)
    {
        printf("Queue is empty \n");
        return;
    }

    printf("Item deleted: %d\n", q[rear]);
    rear--;
    if(front > rear)
    {
        front = 0;
        rear = -1;
    }    
}

void deleteFront()
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
    printf("---- DOUBLE ENDED QUEUE OPERATIONS ---- \n");
    while(1)
    {
        printf("\n1.INSERT REAR \n2.INSERT FRONT \n3.DELETE REAR \n4.DELETE FRONT \n5.DISPLAY \n6.EXIT \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the item in to Queue: ");
                    scanf("%d", &item); 
                    insertRear(); 
                    break;
            case 2: printf("Enter the item in to Queue: ");
                    scanf("%d", &item);
                    insertFront(); 
                    break;
            case 3: deleteRear(); break;
            case 4: deleteFront(); break;
            case 5: display(); break;
            case 6: exit(0);
            default: printf("Invalid Choice! \n");
        }
    }

    return 0;
}