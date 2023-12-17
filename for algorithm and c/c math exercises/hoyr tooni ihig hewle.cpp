#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<c>b)printf("%d",c);
else	if(b<a>c)printf("%d",a);
	else printf("%d",b);
	return 0;
}
