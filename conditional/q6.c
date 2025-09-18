#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("the big num %d",a);
	}
	else if(b>a && b>c){
		printf("the big num %d",b);
	}
	else{
		printf("the big num %d",c);
	}
	return 0;
	
}