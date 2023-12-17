#include<stdio.h>
int main()
{
	int n,a,b,c,d,i;
	scanf("%d",&n);
	a=n/1000;
	b=n%1000/100;
	c=n%1000%100/10;
	d=n%1000%100%10;
	i=b+c;
	if(i%2==0)printf("YES");
	else printf("NO");
	return 0;
}
