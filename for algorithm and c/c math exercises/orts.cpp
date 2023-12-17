#include<stdio.h> 
main() 
{ 
int a,b,c,z,x,n; 
scanf("%d %d %d",&a,&b,&c); 
z=c/b; 
n=c%b; 
if(n>0) z++; 
if(n==0) printf("%d %d",z,b); 
else printf("%d %d",z,n); 
}
