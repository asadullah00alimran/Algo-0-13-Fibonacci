#include <stdio.h>

int main()
{
    int n,i;
    int j = 0;

    printf("How long Array are you want ? : ");
    scanf("%d",&n);

    int arr[n];

    for(i=1; i<=n; i++)
    {
        arr[j] = i;
        j++;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
