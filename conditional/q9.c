#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a&a%2==1){
		printf("odd");
	}
	else{
		printf("even");
	}
	return 0;
}