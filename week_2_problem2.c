#include<stdio.h>

int main()
{
    int n,i,position=-1,key;



    int array[]={202,104,304,223,453,123};


    printf("\nEnter Product key :");
    scanf(" %d",&key);

    n = sizeof(array)/sizeof(array [0]);

    for(i=0;i<=n;i++)
    {
        if(key == array[i])
        {
            position = i + 1;
            break;
        }
    }

    if(position == -1)
        printf("\nProduct code does not matched !\n");

    else
        printf("\nPosition is Row No. %d \n\n",position);



    return 0;
}


