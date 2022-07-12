#include<stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positive number\n",n);
    }
    else if(n<0){
        printf("%d is a negative number\n",n);
    }
    else{
        printf("your number is a zero\n");
    }
    return 0;
}
