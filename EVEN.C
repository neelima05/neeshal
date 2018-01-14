#include<stdio.h>
void main(){
int n,t,i;
printf("enter first interval");
scanf("%d",&n);
printf("enter second interval");
scanf("%d",&t);
for(i=n+1;i<t;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
}