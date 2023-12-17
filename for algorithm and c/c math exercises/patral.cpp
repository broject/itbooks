#include<stdio.h>
#include<stdlib.h> 
int main () 
{ 
int a,i=1, b, n; 
scanf ("%d",&n); 
while ( n%i == 0) 
{ 
n=n/i; b++; 
} 
if( n==1 ) printf("%d",b); 
else printf("NO"); 
system("pause"); 
return 0 ; 
}
