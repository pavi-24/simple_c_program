#include<stdio.h>
int main(){
	char c[24];
	scanf("%[^\n]",&c);
	printf("\"%s\"",&c);
	return 0;
}