#include<stdio.h>
int main()
{
	int n,s,i,t;
	int a[1000];
	scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);}
t=0;
for(i=1;i<=n;i++)
if(a[i]<59) 
t=t++;


	printf("%d",t);
	return 0;
}
