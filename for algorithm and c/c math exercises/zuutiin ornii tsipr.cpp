#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	scanf("%d",&n);
	a=n/1000;
	b=n%1000/100;
	c=n%1000%100/10;
	d=n%1000%100%10;
	printf("%d",c);
	return 0;

	}
