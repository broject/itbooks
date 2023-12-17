#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,d,s,p,n;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	p=a*b*c*d;
	s=a+b+c+d;
	n=p-s;
	printf("%lld",n);
	return 0;
	
}
