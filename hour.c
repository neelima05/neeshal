#include<stdio.h>
void main()
{
	int m,h=0,n;
	printf("enter the time in min");
	scanf("%d",&n);
	h=n/60;
	m=n-(h*60);
	printf("%d %d\n",h,m);
}
