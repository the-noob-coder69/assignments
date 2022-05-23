#include <stdio.h>

int main(){
    float input1, input2, sum;

    printf("Input first number :- ");
    scanf("%f",&input1);

    printf("Input second number :- ");
    scanf("%f",&input2);

    sum = input1*input2;
    printf("Sum = %f\n", sum);
    return 0;
}
