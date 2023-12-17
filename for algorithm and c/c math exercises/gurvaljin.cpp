#include<stdio.h>
int main()
{
	long long n,i,s=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
	s=s+i*i*i;
}
	printf("%lld",s);
	
}

