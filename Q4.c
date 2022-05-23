#include <stdio.h>

/*
int main() {
    float s1, s2, s3, s4, s5, total, percentage;
    printf("Enter marks for  :- ");
    scanf("%f", &s1);
    if (s1 < 1 || s1 > 100) {
        printf("Marks should be between 0 and 100\n");
        return 1;
    }

    printf("Enter marks for  :- ");
    scanf("%f", &s2);
    if (s2 < 1 || s2 > 100) {
        printf("Marks should be between 0 and 100\n");
        return 1;
    }

    printf("Enter marks for  :- ");
    scanf("%f", &s3);
    if (s3 < 1 || s3 > 100) {
        printf("Marks should be between 0 and 100\n");
        return 1;
    }

    printf("Enter marks for  :- ");
    scanf("%f", &s4);
    if (s4 < 1 || s4 > 100) {
        printf("Marks should be between 0 and 100\n");
        return 1;
    }

    printf("Enter marks for  :- ");
    scanf("%f", &s5);
    if (s5 < 1 || s5 > 100) {
        printf("Marks should be between 0 and 100\n");
        return 1;
    }

    total = s1 + s2 + s3 + s4 + s5;
    printf("total = %f\n", total);
    percentage = total/500;
    printf("percentage = %f\n", percentage);

    return 0;
}
*/

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
