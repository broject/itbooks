

#include<stdio.h>
int a[10],n,s,i;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
		s=0;
	for(i=1;i<=n;i++)
	if(a[i]<=5) 
	s=s+a[i];
	printf("%d",s);
	return 0;
	
}

