#include<stdio.h>
int main()
{
	long long n,i,s=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		s=i+n*(n+1)*2*n;
		s++;
		
	}
	printf("%lld",s);
}
