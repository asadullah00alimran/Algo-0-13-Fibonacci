#include <stdio.h>

int funny()
{
    printf("This is user define function\n");
}

int main()
{
    int n;

    printf("This is a main function\n");

    printf("Enter 1 for printing from another function: ");
    scanf("%d", &n);

    if(n==1)
    {
        funny();
    }
    else
    {
        printf("Wrong Input\n");
    }

    return 0;
}

