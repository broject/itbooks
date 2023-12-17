#include<stdio.h>
int main()
{
	int x,n,p,s;
	scanf("%d",&x);
	n=x/3600;
	p=x%60;
	s=x%60;
	printf("%d %d %d", n,p,s);
	return 0;
}
