// 5.write a c program to demonstrate the working of stack of size N using an array. the operations to be supported
//   are 1.PUSH 2.POP 3.DISPLAY.
#include <stdio.h>
#include <stdlib.h>
int s[50], top=-1, size;

void push()
{
    int item;
    if(top == size-1)
    {
        printf("Stack Overflow \n");
        return;
    }
    printf("Enter the item to push: ");
    scanf("%d", &item);
    s[++top] = item;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow \n");
        return;
    }
    printf("The item deleted: %d\n", s[top]);
    top--;
}

void display()
{
    if(top == -1)
    {
        printf("Stack is Empty \n");
        return;
    }
    printf("The elements in the stack are: \n");
    for(int i=top; i>=0; i--)
        printf("%d\n",s[i]);
}

int main()
{
    int choice, n;

    printf("Enter the size of the stack: ");
    scanf("%d",&size);
    printf("---- STACK OPERATIONS ---- \n");
    while(1)
    {
        printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT \n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}