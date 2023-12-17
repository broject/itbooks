#include<stdio.h>
int mai()
{
	long long n,i,s;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		s=i+n*(n+1);
		s++;
	}
	printf("%lld",s);
}





