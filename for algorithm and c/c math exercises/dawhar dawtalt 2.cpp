#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,g,n;
	scanf("%d",&n);
	for(g=n;g<=1;g++)
	{
		for(i=1;i<=g;i--)
		{
			printf("%d",i);
		}
		printf("\n");
		system("pause");
	}
	return 0;
}
