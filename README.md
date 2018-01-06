#include<stdio.h>
void main()
{
int n;
printf("enter a number");
scanf("%d",&n);
if(n>0)
{
printf("no. is positive");
}
else if(n<0)
{
printf("no. is negative");
}
else
{
printf("no. is zero");
}
}
