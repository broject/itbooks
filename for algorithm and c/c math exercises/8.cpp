#include<stdio.h>
int a,b,c,k,i,s; 
int main() 
{ 
scanf("%d",&a); 
for(i=1;i<=a;i++)
{	
b=a-i;
c=b+1;
k=c*i;
s=s+k; 
} 
printf("%d",s); 

}
