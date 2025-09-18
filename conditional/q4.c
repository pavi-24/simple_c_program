#include<stdio.h>
int main(){
	int a,b,d;
	scanf("%d%d",&a,&b);
	d=a-b;
	if(d%2==0){
		printf("diff of num is even ");
	}
	else{
		printf("diff of num is odd");
	}
	return 0;
}