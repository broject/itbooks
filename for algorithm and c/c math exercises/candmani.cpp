#include<stdio.h>
int main()
{
	int a,b,c,s;
	scanf("%d",&c);
	a=c/10;
	b=c%10%10;
	s=a*b;
	if(s%2==0) printf("OK");
	else 
	printf("NO");
}
