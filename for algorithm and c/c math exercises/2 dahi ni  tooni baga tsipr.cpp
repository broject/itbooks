#include<stdio.h>
int main()
{
	int a,k,s=9;
	scanf("%d",&a);
	while(a>0)
	{
		k=a%10;
		a=a/10;
		if(k<s) k=s;
		}
    printf("%d",s);
	return 0;
}
