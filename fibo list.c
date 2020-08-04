#include <stdio.h>

int FibList(int n)
 {
    int fibo[n + 1];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    return fibo[n];
}

int main()
{
    int n,x;

    scanf("%d",&n);

    x = FibList(n);

    printf("Fibo %d = %d\n",n,x);

    return 0;
}

