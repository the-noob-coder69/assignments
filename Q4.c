#include <stdio.h>

int main() {
    float marks=0, total=0;
    for ( int i=0; i<5; i++ ) {
        printf("Enter marks of subject %d :- ", (i+1));
        scanf("%f", &marks);
        if (marks < 1 || marks > 100) {
            printf("Marks should be between 1 and 100\n");
            return 1;
        }
        total += marks;
    }
    printf("Total marks = %f\nPercentage = %f\n", total, ( ( total/500 ) * 100 ));
    return 0;
}
