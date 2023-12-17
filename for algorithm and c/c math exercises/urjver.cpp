#include<stdio.h>
int main()
{
	int n,s=0,i;
	scanf("%d",&n);
	{
	for(i=1;i<=n;i++)
	s=s+1*n+2*(i-1)+3*(i-2);
}
	printf("%d",s);
	return 0;
}
