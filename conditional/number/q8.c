#include<stdio.h>
int main(){
    int n,la=0;
    scanf("%d",&n);
    la=n%10;
    if(la%3==0)
        printf("the last digit is divisible by 3");
    else 
        printf("the last digit is not divisible by 3");
    return 0;
}