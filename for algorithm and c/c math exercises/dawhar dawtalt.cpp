#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,g;
	scanf("%d",&n);
	for(g=n;g>=1;g--)
	{
		for(i=n;i>=1;i--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
