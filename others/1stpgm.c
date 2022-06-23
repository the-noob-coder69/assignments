#include <stdio.h>
#include <math.h>

int perimeter(int a, int b)
{
    int c;
    printf("Enter length of your first side : ");
    scanf("%d", &a);
    printf("Enter length of your second side : ");
    scanf("%d", &b);
    c = 2 * (a + b);
    printf("perimeter of rectangle is %d", &c);
    return 0;
}

int main()
{
    int a, b;
    printf(perimeter(a, b));
    return 0;
}