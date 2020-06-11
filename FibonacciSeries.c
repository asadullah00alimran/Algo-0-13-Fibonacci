#include <stdio.h>
int main()
 {
    int first = 0;
    int second = 1;
    int count = 0;
    int fibo,n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while(count<n)
    {
        if(count<=1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;

        }
        printf("%d ",fibo);
        count++;
    }
    printf("\n\n");

    return 0;
}
