#include<stdio.h>


void main(){
    
int n,t,i;
   
printf("enter the first interval");
    
scanf("%d",&n);
  
printf("enter the second interval");
   
scanf("%d",&t);
    
for(i=n;i<=t;i++)
 
{      
 if(i%2!=0)
{
       
 printf("%d",i);

}
}
}