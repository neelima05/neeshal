#include<stdio.h>
void main()
{
int i,t,l,f;
printf("enter first interval");
scanf("%d",&t);
printf("enter second interval");
scanf("%d",&l);
while(t<l)
{
f=0;
}
for(i=2;i<=t/2;i++)
{
if(t%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("%d",t);
t++;
}
}



