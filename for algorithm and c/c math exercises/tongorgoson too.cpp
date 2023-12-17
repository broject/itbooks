#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,n,p=0;
	scanf("%d",&n);
	while(n>0)
	{
	
	a=n%10;
	p=p*10+a;
	n=n/10;
}
	printf("%d",p);
   system ("pause");
	return 0;
}
