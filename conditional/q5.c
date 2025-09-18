#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>99 && a<1000){
		printf("the given num is three digit num");
	}
	else{
		printf(" not a three digit num");
	}
	return 0;
}