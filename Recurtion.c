#include <stdio.h>

int addNumbers(int n);
int Factorial_value(int n);

int main()
{
     int num;

     printf("Enter a positive integer: ");
     scanf("%d", &num);

     printf("Sum is= %d",addNumbers(num));

     printf("\nFactorial value : %d ",Factorial_value(num));

     return 0;

}

int addNumbers(int n)
{
     if(n != 0)
     {
     return n + addNumbers(n - 1);
     }
     else
     {
     return n;
     }
}

int Factorial_value(int n)
{
     if(n != 0)
     {
     return n * Factorial_value(n - 1);
     }
     else
     {
     return 1;
     }
}

