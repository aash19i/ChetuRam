
#include<stdio.h>
void main()
{
int a[10],i,j,max,n;
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}

}

printf("%d",max);
}
