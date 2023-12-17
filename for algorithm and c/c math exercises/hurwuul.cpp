#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	freopen("hurwuul.in","r",stdin);
	freopen("hurwuul.out","w",stdout);
	scanf("%d",&n);
	a=n/1000;
	b=n%1000/100;
	c=n%1000%100/10;
	d=n%1000%100%10;
	printf("%d",(d*1000)+(c*100)+(b*10)+a);
	//return 0;
}
