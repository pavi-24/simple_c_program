#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		printf("the given character is vowel");
	}
	else{
		printf("the given character is consonant");
	}
	return 0;
}