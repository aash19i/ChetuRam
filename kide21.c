#include<stdio.h>
void main(){
	int n,a,d,sum=0;
	printf("enter n,a and d");
	scanf("%d%d%d",&n,&a,&d);
	sum=n*(2*a+(n-1)*d);
	sum=sum/2;
	printf("%d",sum);
}
