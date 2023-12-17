#include<stdio.h>
int main()
{
	int n, a[1000],min,s,i;
	s=0;
	scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

for(i=1;i<=n;i++)
if(a[i]>0)
s=s+a[i];

	printf("%d",s);
	return 0;
}
