#include<stdio.h>
void main()
{
int i,n,f=1;
printf("enter a no.");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("%d",f);
}