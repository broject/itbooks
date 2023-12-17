#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(b>c)&&(a>c))  printf("%d",c);
	else if((a<c)&&(c>b)&&(a>b))  printf("%d",a);
	else if((a>b)&&(a>c)&&(b>c))    printf("%d",b);
	else printf("%d",d);
	return 0;
}
