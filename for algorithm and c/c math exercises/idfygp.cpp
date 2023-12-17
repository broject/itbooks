#include<stdio.h>
int main()
{
	int a,b,c,d,k,m,s;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a%2==0) a=k*1;
	else if(a%2==1) a=m+1;
	if(b%2==0) b=k*1;
	else if(b%2==1) b=m+1;
	if(c%2==0) c=k*1;
	else if(c%2==1) c=m+1;
	if(d%2==0) d=k*1;
	else if(d%2==1) d=m+1;
	k=a*b*c*d;
	m=a+b+c+d;
	s=k-m;
	printf("%d",s);
}
