#include<stdio.h> 
int n,i,a[100],s,k; 
main() 
{ 
scanf("%d",&n); 
for(i=1;i<=n;i++) 
scanf("%d",&a[i]); 
scanf("%d",&k); 
s=0; 
for(i=1;i<=n;i++) 
if(a[i]==k) 
s=s+1; 
printf("%d %d",k,s); 
return 0; 
}
