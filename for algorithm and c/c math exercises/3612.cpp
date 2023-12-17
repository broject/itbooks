#include<stdio.h>
#include<math.h>
int main()
{
	int a,t,m,s;
	scanf("%d",&a);
	t=a/3600;
	m=a%t;
	s=a%3600;
	printf("%d %d %d",t,m,s);
	return 0;
}
