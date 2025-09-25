#include<stdio.h>
int main(){
	char a;
	
	scanf("%c",&a);
	if(a>='A' && a<='z'){
		printf("this is a alphabet");
	}
	else{
		printf("this not a alphabet");
	}
	return 0;
}