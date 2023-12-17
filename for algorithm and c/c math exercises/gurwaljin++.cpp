#include<stdio.h>
int main()
{
	int a,s,p;
	scanf("%d",&a);
	p=a/60;
	s=a%60;
	printf("%d %d",p,s);
	return 0;
}
