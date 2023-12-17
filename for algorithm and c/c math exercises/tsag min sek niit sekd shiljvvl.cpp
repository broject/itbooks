#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,m,s,p,d,t,r;
	scanf("%d%d%d",&a,&m,&s);
	p=a*3600;
	d=m*60;
	r=s;
	t=p+d+r;
	printf("%d",t);
	system ("pause");
	return 0;
}
