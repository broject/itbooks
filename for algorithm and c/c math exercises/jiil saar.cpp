#include<stdio.h>
int main()
{
	int n,s,m,p;
	scanf("%d",&n);
	s=n/3600;
	m=n%3600;
	p=n%3600;
	printf("%d %d %d", s,m,p);
	return 0;
}
