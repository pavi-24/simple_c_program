#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("smallest num %d",a);
	}
	else if(b<a && b<c){
	    printf("smallest num%d",b);
    }
    else{
    	printf("smallest num %d",c);
	}
	return 0;
}