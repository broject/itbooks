#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,w;
	float d,q,t;
	scanf("%d",&a);
	b=a*a;
	d=(a/2)*(a/2);
	c=b-d;
	q=sqrt(c);
	t=(q*a)/2;
	w=a+a+a;
	printf("%d %.2f",w,t);
}
