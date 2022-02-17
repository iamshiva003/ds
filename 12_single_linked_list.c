// 12. Write a C Program to implement Single Linked List.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node* link;
};
typedef struct node* NODE;

NODE getnode()
{
    NODE x;

    x = (NODE) malloc(sizeof(struct node));

    if(x == NULL)
    {
        printf("No Memory \n");
        return NULL;
    }
    return x;

}

NODE insertFront(int item, NODE first)
{
    NODE temp;

    temp = getnode();

    temp->info = item;
    temp->link = first;

    return temp;
}

NODE deleteFront(NODE first)
{
    NODE temp;

    if(first == NULL)
    {
        printf("List is Empty \n");
        return NULL;
    }

    temp = first;
    temp = temp->link;
    printf("Item deleted: %d\n", first->info);

    free(first);
    return temp;
}

void display(NODE first)
{
    NODE temp;

    if(first == NULL)
    {
        printf("List is Empty \n");
        return;
    }

    printf("The elements in the list are : \n");
    temp = first;
    while(temp != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int choice, item;
    NODE first;

    printf("--- SINGLY LINKED LIST OPERATIONS ---- \n");
    first = NULL;
    while(1)
    {
        printf("\n1.INSERT FRONT \n2.DELETE FRONT \n3.DISPLAY \n4.EXIT \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the item: ");
                    scanf("%d", &item);
                    first = insertFront(item, first);  
                    break;
            case 2: first = deleteFront(first);  
                    break;
            case 3: display(first);  
                    break;
            case 4: exit(0); 
            default: printf("Invalid choice! \n");
        }
    }
    return 0;
}