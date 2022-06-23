#include<stdio.h>

int main(){
    int n;
    printf("Enter your String(Upper case):");
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
        while (arr[i] != '\0'){
            if(arr[i] > 64 && arr[i] < 91){
                arr[i] += 32;
            i++;
            }
            else{
                arr[i]-=31;
            i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
    return 0;
}