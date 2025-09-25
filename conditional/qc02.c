#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z'){
		printf("the give character is upper case");
	}
	else if(a>='a' && a<='z'){
		printf("the given chracter is lower case");
	}
	else if(a>='0' && a<='9'){
		printf("this is a digit");
	}
	else{
		printf("the given is a special symbol");
	}
	return 0;
}