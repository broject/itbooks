#include<stdio.h>
int main()
{
	int n,s,i;
	s=1;
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	s=s*i;
	printf("%d",s);
}
