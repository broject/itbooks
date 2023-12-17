#include<stdio.h>
int main()
{
	int a,i,k=1;
	scanf("%d",&a);
	a<=100;
	for(i=1;i<=10;i++)
	{
		k=a*i;
		printf("%d*%d=%d\n",a,i,k);
		
	}
}
