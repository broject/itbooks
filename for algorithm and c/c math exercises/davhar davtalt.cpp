#include<stdio.h>
int main()
{
	long n,a,b,c,s,d;
	scanf("%ld",&n);
a=n/1000;
b=n%1000/100;
c=n%1000%100/10;
d=n%1000%100%10;
s=1000*d+100*c+10*b+a;
printf("%ld",s);
return 0;
}
