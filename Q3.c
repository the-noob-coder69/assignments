#include <stdio.h>

int main() {
    float length, breadth, perimeter;
    
    printf("Enter length of the rectangle :- ");
    scanf("%f", &length);
    if (length < 1) {
        printf("length should be greater than 0\n");
        return 1;
    }

    printf("Enter breadth of the rectangle :- ");
    scanf("%f", &breadth);
    if (breadth < 1) {
        printf("breadth should be greater than 0\n");
        return 1;
    }

    perimeter = 2 * (length + breadth);
    printf("Perimeter of rectangle = %f", perimeter);

    return 0;
}
