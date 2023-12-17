#include<stdio.h>  
int main() 
{ 
int a,d,f=9; 
scanf("%d",&a); 
while (a>0) 
{ 
d=a%10; 
a=a/10; 
if(d<f) f=d; 
} 
printf("%d",f); 
return 0; 
} 
