#include <stdio.h>

int main() {
    int choice;
    float Temp;
    printf("Input temprature :- ");
    scanf("%f", &Temp);
    printf("Choices :\n1. Fahrenheit to Centigrade.\n2. Centigrade to Fahrenheit.\n");
    printf("Enter your choice[1/2] :- ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("%f℉ = %f℃ ", Temp, ( ( Temp - 32 ) * 5/9 ));
    }
    else if (choice == 2) {
        printf("%f℃ = %f℉ ", Temp, ( ( Temp * 1.8 ) + 32 ));
    }
    else {
        printf("Invalid input %f", choice);
    }
    return 0;
}
