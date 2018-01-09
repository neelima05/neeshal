#include<stdio.h>
void main()
{
int base,expo,i,a=1;
scanf("%d%d",&base,&expo);
for(i=1;i<=expo;i++)
{
a=a*base;
}
printf("%d",a);
}