#include<stdio.h>
void main()
{
int i,a,b[10],min;
printf("enter the number");
scanf("%d",&a);
printf("enter the array");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
min=b[0];
for(i=1;i<a;i++)
{
if(b[i]<min)
{
min=b[i];
}
}
printf("min no. is %d",min);
}