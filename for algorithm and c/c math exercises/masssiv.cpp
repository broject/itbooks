#include<stdio.h>
int a[100],n,i;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	if(a[i]%3==0) printf("%d",a[i]);
}
