#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a==0){
		printf("the given num is zero");
	}
	else if(a>0){
		printf("the given num is positive");
	}
	else{
		printf("the given num is negative");
	}
	return 0;
}