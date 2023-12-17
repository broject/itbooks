#include<stdio.h>
int main()
{
	int n,s,i,t,h;
	int a[100];
	scanf("%d",&n);
	scanf("%d",&h);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
t=0;
for(i=1;i<=n;i++)
if(a[i]==h)
t=t+1;
	printf("%d%d",h,t);
	return 0;
}
