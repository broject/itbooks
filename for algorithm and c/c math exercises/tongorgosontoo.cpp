#include<stdio.h>
int main()
{
	int n,k,s;
	scanf("%d",&n);
s=0;
	while(n>0)
	{
	k=n%10;
	n=n/10;

s=s/10+k;
printf("%d",s);
}
}
