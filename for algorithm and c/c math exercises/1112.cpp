#include<stdio.h>
int main()
{
	int a,b,c,d,p,s,t;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	p=a*b*c*d;
	s=a+b+c+d;
	t=p-s;
	printf("%d",t);
	return 0;
	
}
