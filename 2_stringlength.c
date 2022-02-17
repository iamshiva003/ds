// 2.write a c program to calculate the length of the string using pointer.
#include <stdio.h>

int strlength(char *str)
{
    int length=0;
    while((*str) != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[20];
    int length;

    printf("Enter the string: ");
    scanf("%s", str);

    length = strlength(str);
    printf("The length of the string is: %d\n",length);

    return 0;
}