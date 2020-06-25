#include<stdio.h>

int main()
{
    int n,i,position=-1,value;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    int array[n];

    printf("\nEnter the values of array  : ");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&array[i]);
    }

    printf("\nEnter value for searching Position :");
    scanf(" %d",&value);

    for(i=0;i<=n;i++)
    {
        if(value == array[i])
        {
            position = i + 1;
            break;
        }
    }

    if(position == -1)
        printf("\nNot Found\n");

    else
        printf("\nThe position of entered value(%d) is : %d\n\n",value,position);



    return 0;
}

