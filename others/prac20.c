#include<stdio.h>

int main(){
    int x,n,ans=1;
    printf("Enter your number: ");
    scanf("%d",&x);
    while(x<=0){
        printf("Enter number again: ");
        scanf("%d",&x);
    }
    printf("Enter power: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ans*=x;
    }
    printf("Answer is %d",ans);
return 0;
}