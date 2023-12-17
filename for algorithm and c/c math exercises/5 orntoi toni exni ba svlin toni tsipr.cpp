#include<stdio.h>
int main()
{
	int a,b,c,d,h,s,n;
	scanf("%d",&n);
	a=n/10000;
	b=n%1000;
	c=n%100;
	d=n%10;
	h=n%10;
	s=a+h;
	printf("%d",s);
	
}
