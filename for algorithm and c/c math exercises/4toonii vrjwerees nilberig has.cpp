#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d,k,p,t;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	k=a*b*c*d;
	p=a+b+c+d;
	t=k-p;
	printf("%d",t);
	return 0;
}
