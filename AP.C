#include<stdio.h>
void main()
{
int a,d,n,i,sum=0,val;
printf("enter the first element and common difference");
scanf("%d%d",&a,&d);
val=a;
for(i=0;i<n;i++)
{
printf("%d",&a);
sum=sum+a;
a=a+d;
}
printf("\n sum of the AP series till %d terms is %d\n":terms,sum);
}
