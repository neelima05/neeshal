#include<stdio.h>
void main()
{
int i,j,t,a[10],n;
printf("enter the no.");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("median is %d",a[(n-1)/2]);
}
