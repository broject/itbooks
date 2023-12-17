#include<stdio.h>
int main()
{
	int a,b,c,d,l,k,j,m;
	scanf("%d",&a);
	
	b=a/1000;
	c=a%1000/100;
	d=a%1000%100/10;
	l=a%1000%100%10;
	k=b+c;
	j=d+l;
	m=k-j;
	printf("%d",m);
		
	
	
}
