#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='0' && a<='9'){
		printf("this is a digit");
	}
	else{
		printf("this not a digit");
	}
	return 0;
}
