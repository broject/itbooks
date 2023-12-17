#include<stdio.h>
int main()
{
	int n,s,i,t,z;
	int a[1000];
	scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);}
t=0;
z=0;
for(i=1;i<=n;i++)
if(a[i]%2==0) 
t=t+1;
else
z=z+1;
if(z>t)
printf("YES");
	else 
		printf("NO");
	return 0;
}
