#include<stdio.h>
int main()
{
	int a,b,c,d,k,l,p;
	scanf("%d",&a);
	b=a/100;
	c=a%100/10;
	d=a%100%10;
	k=b+d;
	l=c*c;
	p=k-l;
	printf("%d",p);
}
