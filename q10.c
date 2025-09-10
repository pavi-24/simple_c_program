#include<stdio.h>
int main(){
	int a,f,l,s;
	scanf("%d",&a);
	l=a%10;
	f=a/100;
	s=l+f;
	printf("%d",s);
	return 0;
	
}