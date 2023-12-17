#include<stdio.h>
int main ()
{ 
  int r,a,b;
scanf("%d",r);
a=r/10;
b=r%10;
r=a*b;
if(r%2==0) printf("OK");
else printf("NO");
return 0;

}
