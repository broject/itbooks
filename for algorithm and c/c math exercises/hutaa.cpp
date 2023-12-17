#include<stdio.h>
int main()
{
	int a,b,s,n=2;
	scanf("%d%d",&a,&b);
	while(n<=a)
	{
	
	if((a%n==0)&&(b%n==0)) printf("%d%d",a/b);
else	n=n+1;
}

printf("%d %d",a/b);
return 0;
}
