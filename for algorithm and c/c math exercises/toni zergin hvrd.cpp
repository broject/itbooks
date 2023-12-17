#include <stdio.h> 
#include <math.h> 

int main(){ 
{ 
int i,n,a,b; 
scanf("%d %d",&a,&b); 
for(i=1;i<=b;i++) 
{ 
n=pow(a,i); 
printf("%d^%d=%d\n",a,i,n); 
} 
} 

return 0; 
}

