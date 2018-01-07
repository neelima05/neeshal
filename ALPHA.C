#include<stdio.h>
void main()
{
char s;
printf("enter a character");
scanf("%c",&s);
if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
{
printf("alphabet");
}
else
{
printf("it is not alphabet");
}
}