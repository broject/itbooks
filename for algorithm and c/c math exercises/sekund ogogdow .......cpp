#include<stdio.h>
#include<conio.h>

int main()
{
	int x,s,m,p;
	scanf("%d",&x);
	s=x/3600;
	m=x/60;
	p=x%60;
	printf("%d %d %d", s,m,p);
	return 0;
 }
