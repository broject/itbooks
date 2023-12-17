#include <stdio.h> 
#include <stdlib.h> 
main() 
{ 
int a,b,c,d; 
scanf("%d%d%d%d",&a,&b,&c,&d); 
int m=d/(a*c); 
if (d%(a*c)==0) 
{ printf("%d %d %d",m,a,c); } 
else { printf("%d ",m+1); 
d=d-(a*c*m); 
m=d/c; 
if (d%c==0) 
{ printf("%d %d",m,c); 
} else 
{ printf("%d %d",m+1,d-m*c); }} 
}
