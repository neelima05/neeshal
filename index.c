#include<stdio.h>
void main()
{
	int a[20],i,n;
	printf("enter the no.");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
  for(i=0;i<n;i++)
  {
  	printf("%d %d\n",a[i],i);
  }
}
