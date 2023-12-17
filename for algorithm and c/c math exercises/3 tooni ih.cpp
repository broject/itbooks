#include<stdio.h>
int main()
{
	int a,k,s=0;
	scanf("%d",&a);
	while(a>0)
	{
		k=a%10;
		a=a/10;
		if(k>s) s=k;}
    printf("%d",s);
	return 0;
}
