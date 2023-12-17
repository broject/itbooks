#include<stdio.h>
int main()
{
	int s=0,a,i;
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		s=a*i;
		printf("%d*%d=%d\n",a,i,s);
	}
	return 0;
}
