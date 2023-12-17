#include<stdio.h>
int main()
{
	int a,t,m,s;
	scanf("%d",&a);
	t=a/3600;
	m=t%3600/60;
	s=a%60;
	printf("%d %d %d",t,m,s);
	return 0;
}
