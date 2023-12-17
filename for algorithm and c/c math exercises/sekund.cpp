#include<stdio.h>


int main()
{
	int x,s,m,p;
	scanf("%d",&x);
	s=x/3600;
	m=x%3600/60;
	p=x%3600%60;
	printf("%d %d %d", s,m,p);
	return 0;
 }
