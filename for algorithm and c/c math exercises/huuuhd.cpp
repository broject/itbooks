#include<stdio.h>
#include<stdint.h>
//#include<stdlib.h>
long long a[500],b; 
long  n,q,i,j,s,k,l=1;
int main()
{
	scanf("%d",&n);
	a[0]=1; a[1]=1; a[2]=2;
		scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&b);
		q=b;
		a[q]=0;
		}
	
	for(i=1;i<=n;i++)
	{
		if(a[i]!=0) { 
						a[i]=a[i-1]+a[i-2]+a[i-3];
					}
	}
	printf("%llu",a[n]);
	//system("pause");
	return 0;
}
