#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
    a=a%10;
    if(a%3==0){
    	printf("given num is divisable by 3 ");
	}
	else{
		printf("not divisable");
	}
	return 0;
}