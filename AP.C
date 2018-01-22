#include<stdio.h>
void main()
{
int a,d,n,i,sum=0,val;
printf("enter the first element and common difference");
scanf("%d%d",&a,&d);
val=a;
for(i=0;i<n;i++)
{
printf("%d",&val);
sum=sum+val;
val=val+d;
}
printf("%d",sum);
}
