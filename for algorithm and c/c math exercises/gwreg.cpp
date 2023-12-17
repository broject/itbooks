#include<stdio.h>
int main()
{
	int a,b,c,s;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(b>c)) printf("%d",b);
	else if((b>c)&&(a<c)) printf("%d",c);
	else if((c>b)&&(b>a)) printf("%d",b);

}
