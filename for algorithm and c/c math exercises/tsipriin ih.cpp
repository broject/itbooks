#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,p,b,l;
	scanf("%d",&a);
	l=a/10;
	p=a%10;
	if(l>p) printf("%d",l);
	else printf("%d",p);
	system("pause");
	return 0;
}
