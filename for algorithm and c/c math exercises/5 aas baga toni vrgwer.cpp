#include<stdio.h> 
#include<stdlib.h>
 
int main() 
{ int a,b,c,d,s; 
scanf("%d %d %d %d",&a,&b,&c,&d); 
if (a<5) s=a; 
if (b<5) s=s*b; 
if (c<5) s=s*c; 
if (d<5) s=s*d; 
printf("%d",s); 
system ("pause");
 
return 0; 
}
