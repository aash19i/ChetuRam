#include<stdio.h>
void main()
{
	char c;
	char a,e,i,o,u,A,E,I,O,U;
	printf("enter character");
	scanf("%c",&c);
	if(c>='a' && c<='z' || c>='A' && c<='Z'){
        if(c=='a' ||c=='e'||c=='i' ||c=='o' ||c=='u' ||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U'){
		printf("vowels");}
	    else
	    printf("consonants");
} else
printf("invalid");}
