#include<stdio.h>
int main()
{
	int a,s=0,i,n,m;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	if(a%2==0) s=s+a;
	printf("%d",s);
	return 0;
	
}
