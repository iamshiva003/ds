#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};
typedef struct node *NODE;

NODE getnode(int item)
{
    NODE temp;

    temp = (NODE) malloc(sizeof(struct node));
    temp->info = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

NODE insert(int item, NODE root)
{

    if (root == NULL)
        return getnode(item);

    if (item < root->info)
        root->left = insert(item, root->left);
    else
        root->right = insert(item, root->right);

    return root;
}

void display(NODE root, int level)
{
    int i;

    if (root == NULL)
        return;

    display(root->right, level + 1);

    for (i=0; i<level; i++)
        printf("\t");

    printf("%d\n", root->info);

    display(root->left, level + 1);
}

int main()
{
    NODE root;
    int choice, item;
    
    root = NULL;
    printf("--- Binary Tree --- \n");

    while(1)
    {
        printf("\n1.Insert \n2.Display \n3.Exit \n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: printf("Enter the item to be inserted: ");
                    scanf("%d", &item);
                    root = insert(item, root);
                    break;
            case 2: if (root == NULL)
                    {
                        printf("Tree is empty\n");
                        break;
                    }
                    printf("The given tree in tree form is\n");
                    display(root, 1);
                    break;
            case 3: exit(0);
            default: printf("Invalid choice \n");
        }
    }
    return 0;
}