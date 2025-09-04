#include<stdio.h>
int main(){
	int r;
	char n[30];
	scanf("%d\n%[^\n]s",&r,&n);
	printf("Roll no:%d\nName:%s",r,n);
	return 0;
}