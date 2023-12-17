#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,h;
	scanf("%d%d%d",&a,&b,&c);
	h=sqrt(2(a*a)-a/2);
	s=a*h/2;
	printf("%d",s);
	return 0;
}
