#include<stdio.h>

int main()
{
    int n,i,a[100];

    printf("Enter Array Size : ");
    scanf("%d",&n);

    printf("Enter the list of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int left,right,mid;
    left=0;
    right=n-1;
    mid=(left+right)/2;
    int key;

    printf("Enter Search Key : ");
    scanf("%d",&key);

    while(left<=right)
    {
        if(key<a[mid])
        {
            right=mid-1;
        }

        else if(key>a[mid])
        {
            left=mid+1;
        }

        else if(key==a[mid])
        {
        printf("Found %d at Index : %d",key,mid);
        break;
        }

        mid=(left+right)/2;
        }

        if(left>right)
        {
        printf("Not Found");
        }

    return 0;
}
