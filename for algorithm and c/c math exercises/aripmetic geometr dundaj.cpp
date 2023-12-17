#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n,m,s,q;
	scanf("%d%d",&a,&b);
	n=(a+b)/2;
	q=sqrt(a*b);
	s=q+n;
	printf("%d",s);
	return 0;
}
