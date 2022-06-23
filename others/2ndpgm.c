#include <stdio.h>

int check_armstrong(int n)
{
    int m, rev_num, a;
    a = 0;
    while (n != 0)
    {
        m = n % 10;
        rev_num = rev_num + m * 10;
        n = n / 10;
    }
    if (rev_num == n)
    {
        a = 1;
    }
    else
    {
        a = 0;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", n);
    if (check_armstrong(n) == 1)
    {
        printf("given number is an armstrong number:");
    }
    else
    {
        printf("given number is not an armstrong number:");
    }
}