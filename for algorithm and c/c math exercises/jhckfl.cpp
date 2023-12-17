#include<stdio.h>
int main()
{
	int n,s,i;
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	if(i%2==0) s=s+i;
	printf("%d",s);
}
