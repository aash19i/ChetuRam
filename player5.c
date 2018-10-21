#include<stdio.h>
#include<string.h>
int main()
{
	
    char a[10];
        int s=0 , i;

    gets(a);
   
    for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(a[i] == 'i'){
	
	
	s= s+1;
}

	else if( a[i] == 'v') 
{
	s=s+5;
}
	else if( a[i] == 'x')
{
		s= s + 10;	
	}
}
 
  for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(a[i] == 'i' && (a[i+1] == 'v' ||   a[i+1]== 'x'))
	s = s-2;
	}
	   
	printf("%d\n",s);
}



