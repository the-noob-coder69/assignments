#include<stdio.h>

// int main()
// {
//     int num, a, b, d1, d2, d3;
//
//     printf("Enter the number whose sum of digits you want: ");
//     scanf("%d", &num);
//
//     d1 = num % 10;
//     a = num / 10;
//
//     d2 = a % 10;
//     b = a / 10;
//
//     d3 = b % 10;
//     
//     printf("\nThe reverse of the number is: %d%d%d", d1,d2,d3);
//     
//     return 0;
// }
int main (int argc, char *argv[])
{
    int num, rev=0;
    printf("Enter three digit number :- ");
    scanf("%d", &num);
    rev = (rev * 10) + num%10;
    num/=10;
    rev = (rev * 10) + num%10;
    num/=10;
    rev = (rev * 10) + num%10;
    printf("%d\n", rev);
    return 0;
}
