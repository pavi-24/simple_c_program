#include<stdio.h>
int main(){
    int a,b,diff=0;
    scanf("%d%d",&a,&b);
    diff=a-b;
    if(diff%2==0)
        printf("the diffrence %d is even",diff);
    else
        printf("the diffrence %d is odd",diff);
    return 0;
}