#include<stdio.h>
int main()
{
	int a,b,c,d,s,n,i;
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	b=a/100;
	c=a%100/10;
	d=a%100%10;
	s=b+c+d;
	printf("%d",s);
	return 0;
}
