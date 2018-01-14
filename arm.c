#include<stdio.h>
void main()
{
int n,r,result=0,,t;
printf("enter a no.");
scanf("%d",&n);
t=n;
while(n!=0)
{
r=n%10;
result=result+pow(r,3);
n=n/10;
}
if(result==t)
{
printf("armstrong no.");
}
else{
printf("not an armstrong no.");
}
}