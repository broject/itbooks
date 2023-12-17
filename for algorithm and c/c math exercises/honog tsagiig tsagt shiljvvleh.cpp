#include<stdio.h>
int main()
{
	int a,b,p,s,n;
	scanf("%d%d",&a,&b);
	p=a*24;
	s=b%p;
	n=p+s;
	printf("%d",n);
	return 0;
	
}
