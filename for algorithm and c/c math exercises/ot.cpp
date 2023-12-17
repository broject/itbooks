#include<stdio.h>
int a[101];
int main()
{
	int n,m,s,k,i;
	scanf("%d%d",&m,&n);
    if(m<=n){
    a[2]=2;
	for(i=3;i<=m;i++)
	a[i]=a[i-1]+2;	
   printf("%d",a[m]);
	} 
	else
	{
		a[2]=3;
		for(i=3;i<=n;i++)
			a[i]=a[i-1]+2;
			printf("%d",a[n]);
	}
	
	
	
}
