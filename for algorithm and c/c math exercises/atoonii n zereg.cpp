#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,i,s=1;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	s=pow(a,i);
	printf("%d",s);
}
