#include<stdio.h>
void main()
{
	int h,m,h1,m1,t,t2;
	printf("enter the first time");
	scanf("%d %d",&h,&m);
	printf("enter the second time");
	scanf("%d %d",&h1,&m1);
	t=h-h1;
	t2=m-m1;
	printf("%d %d",t,t2);
}
