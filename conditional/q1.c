#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("the greatest num is %d",a);
	}
	else{
		printf("The greatest num is %d",b);
	}
	return 0;
}