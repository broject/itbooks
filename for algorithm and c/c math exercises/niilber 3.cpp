#include<stdio.h>
int main()
{
	int a,n,s;
	s=0;
	scanf("%d",&n);
	while(n%2==1)
		s=s+n;
	printf("%d",s);
	return 0;
}
