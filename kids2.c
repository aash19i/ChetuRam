#include<stdio.h>
void main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	if(n>=0){
        if(n%2==0)
		printf("even");
		else
		printf("odd");
		}
	else
	printf("invalid");				
}
