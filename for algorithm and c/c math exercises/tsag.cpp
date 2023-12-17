#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&d);
	a=d/3600;
	b=d/60%60;
	c=d%60;
	printf("%d %d %d",a,b,c);
}
