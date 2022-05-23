#include <stdio.h>

int main() {
    float principle, rate, time, interest;

    printf("Enter principle :- ");
    scanf("%f", &principle);
    if (principle < 1) {
        printf("principle should be greater than 0\n");
        return 1;
    }

    printf("Enter rate :- ");
    scanf("%f", &rate);
    if (rate < 1) {
        printf("rate should be greater than 0\n");
        return 1;
    }

    printf("Enter time :- ");
    scanf("%f", &time);
    if (time < 1) {
        printf("time should be greater than 0\n");
        return 1;
    }

    interest = principle * time * rate/100;
    printf("interest = %f\n", interest);

    return 0;
}
