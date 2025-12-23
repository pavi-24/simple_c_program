#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>99 && n<1000)
        printf("the given number is three digit number");
    else    
        printf("the given number is not a three digit number");
    return 0;
}