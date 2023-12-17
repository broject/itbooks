#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,i,k,s,n,max;
	scanf("%d",&a);
	
   for(i=1;i<=n;i++)
	{
		k=a%10;
		a=a/10;}
	
	
		if(k>a) max=k;
		else max=a;
		printf("%d",max);
	system("pause");
	return 0;
}
