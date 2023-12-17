#include<stdio.h>
int main()
{
	int a,n,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(n=1;n<=a;n++)
		{
			printf("%d",n);
		}
		printf("\n");
	}
	return 0;
}
