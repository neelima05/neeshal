#include<stdio.h>
void main()
{
int i,a,b[10],tmp,c;
printf("enter the no.");
scanf("%d",&a);
printf("enter the array");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
for(c=i+1;c<a;c++)
{
if(b[i]>b[c])
{
tmp=b[c];
b[c]=b[i];
b[i]=tmp;
}
}
}
for(i=0;i<a;i++)
{
printf("%d",b[i]);
}
}
