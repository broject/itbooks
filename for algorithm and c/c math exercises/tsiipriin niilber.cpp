#include<stdio.h>
int main()
{
	int a,b,s,n,i;
	scanf("%d",&n);
	for(i=99;i>=10;i--)
	{
	a=i/10;
	b=i%10;
	s=a+b;
	if(n==s)
	printf(" %d",i);}
}
