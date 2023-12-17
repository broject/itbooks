#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d",&c);
	a=c/3600;
	b=c%3600/3600;
	n=c%60;
	printf("%d %d %d" ,a,b,n);
}
