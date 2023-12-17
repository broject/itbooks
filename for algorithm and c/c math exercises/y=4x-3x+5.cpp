#include<stdio.h>
int main()
{
	int a,p,s,b;
	scanf("%d",&a);
	p=a/3600;
	s=a%p;
    b=a%3600;
	printf("%d %d %d",p,s,b);
	return 0;
	
}
