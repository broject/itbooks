#include<stdio.h>
int a[101];
int main()
{
	int i,j,n,r;
	scanf("%d%d",&n,&r);
	for(i=1;i<=r;i++)
	{
		scanf("%d",&j);
		a[j]=0;
	}
	
	a[0]=1;
	a[1]=1;
	a[2]=2;
	for(i=1;i<=n;i++)
	{
		if(a[i]!=0) a[i]=a[i-2]+a[i-1]+a[i-3];
	}
	printf("%d",a[n]);
}
