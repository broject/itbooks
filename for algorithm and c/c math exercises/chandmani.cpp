#include<stdio.h>
int main()
{
	int a,c,d,n;
	scanf("%d",&n);
	c=n/10;
	d=n%10%10;
	a=c*d;
	if(a/2==0) printf("OK");
	else
	printf("NO");
}


