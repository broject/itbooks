#include<stdio.h>
int main()
{
	int a,b,c,p,l,f,s;
	scanf("%d%d%d",&a,&b,&c);
	s=a*3600;
	p=b*60;
	l=c;
	f=s+p+l;
	printf("%d",f);
	return 0;
}
