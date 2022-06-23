#include<stdio.h>

int main(){
	int n;
	printf("Enter a number :- ");
	scanf("%d",&n);
	if(n<1){
		printf("Entered number is less than 0");
        return 1;
	}
	else printf( "%d is an %s number\n", n, (n%2==0)?"even":"odd");
	return 0;
}
