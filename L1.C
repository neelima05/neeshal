#include<stdio.h>
void main()
{
int a,b[a],i,max;
printf("enter a no.");
scanf("%d",&a);
printf("enter the array");
for(i=0;i<a;i++)
scanf("%d",&b[i]);
if(i==0)
{
max=b[i];
}
if(max<b[i])
{
max=b[i];
}
printf("%d",max);
}


