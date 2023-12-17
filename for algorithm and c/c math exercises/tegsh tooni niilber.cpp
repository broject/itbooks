#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,s=1;
	scanf("%d%d%d",&a,&b,&c);
	if(a%2==1) s=s*a;
	if(b%2==1) s=s*b;
	if(c%2==1) s=s*c;

	printf("%d",s);
	system ("pause");
	return 0;
}
