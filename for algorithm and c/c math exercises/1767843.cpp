#include<stdio.h>
int main()
{
int n,a,b;
scanf("%d",&n);
a=n/100;
b=n%100/10;
if((a*b)%2==0)
printf("OK");
else printf("NO");
}
