#include <stdio.h>
#include<conio.h>
int main()
 {
    int n, fibo[100000005];
    fibo[0] = 0;
    fibo[1] = 1;

    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
    }

    printf("%d\n",fibo[n]);

    return 0;
}
