#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a/=100;
	if(a%2==0){
		printf("the given num %d is even",a);
	}
	else{
		printf("the given num %d is odd",a);
	}
	return 0;
}