#include<stdio.h>
int main()
{
	int a,b,c,n,s;
	scanf("%d",&n);
	a=n/100;
	b=n%100/10;
	c=n%100%10;
	s=a*b*c;
	printf("%d",s);	
}
