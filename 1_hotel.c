// 1.write a c program to read and calculate item prices used in party and divide the expenses amount in 
//   friends equally in c using structures.
#include <stdio.h>
#define MAX 10

struct itemDetails
{
    char item[10];
    float price;
    float total;
    int quantity;
};

int main()
{
    struct itemDetails things[MAX];
    int choice, count=0 , i=0;
    float expense=0;

    printf("---- Welcome to C restaurant ---- \n");
    printf("\nEnter the Item details\n");
    do
    {
        printf("Item name : ");
        scanf("%s",things[i].item);
        printf("Quantity  : ");
        scanf("%d",&things[i].quantity);
        printf("Price     : ");
        scanf("%f",&things[i].price);

        things[i].total = things[i].quantity * things[i].price;
        expense += things[i].total;

        i++;
        count++;

        printf("Order more? click 1 or click 0: ");
        scanf("%d",&choice);
        printf("\n");
    } while (choice == 1);

    printf("The item details are: \n");
    printf("------------------------\n");
    printf("Item Name | Price | Quantity | Total \n");
    for(int i=0; i<count; i++)
        printf(" %s       %0.2f       %d       %0.2f  \n", things[i].item, things[i].price, things[i].quantity, things[i].total);
    
    printf("Total Expense is: %0.2f\n", expense);
    printf("\nDo you want divide with friends?\n");
    printf("Yes then click 1 or click 0: ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("How many friends?: ");
        scanf("%d", &i);
        printf("\nEach one has to pay: %0.2f\n",(expense/(float)i));
    }

    printf("---- Thank You ----\n");

    return 0;
}