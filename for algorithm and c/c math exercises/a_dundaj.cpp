#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,n,m,s,q;
	scanf("%f%f",&a,&b);
	n=(a+b)/2;
	q=sqrt(a*b);
	s=q+n;
	printf("%f",s);
	return 0;
}
