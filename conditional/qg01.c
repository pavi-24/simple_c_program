#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b & b==c){
		printf("the triangle is equilateral");
	}
	else if(a==b || a==c){
		printf("the triangle is isosceles");
	}
	else{
		printf("the triangle is scalene");
	}
	return 0;
}