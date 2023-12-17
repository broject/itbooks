#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,n,m,k,d,r,u,p;
	scanf("%f",&x);
	y=x*x*x;
	n=5*x*x;
	m=3*x;
	k=y+n;
	p=k-m;
	r=p+7;
	u=x+4;
	d=r/u;
	printf("%.3f",d);
	return 0;
}
