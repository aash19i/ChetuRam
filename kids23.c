#include<stdio.h>
void main()
{
int a[100],i,j,min,n;
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}

}

printf("%d",min);
}
