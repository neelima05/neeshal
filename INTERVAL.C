#include<stdio.h>
void main()
{
int n,t,r,i,re=0,temp;
printf("enter the first interval");
scanf("%d",&n)
printf("enter the second interval");
scanf("%d",&t);
temp=i;
for(i=n+1;i<t;i++)
while(temp!=0)
{
r=temp%10;
re=re+r*r*r;
temp=temp/10;
}
if(re==i)
{
printf("%d",i);
}
}