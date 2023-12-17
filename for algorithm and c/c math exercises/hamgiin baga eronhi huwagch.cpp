#include<stdio.h>
int main(void)
{
	long a,b,s;
	scanf("%ld%ld",&a,&b);
	if(a%b==0) {printf("%ld",a); return 0;}
	if(b%a==0) {printf("%ld",b); return 0;}
	s=a;
	while (true)
	{
		if((s%a==0)&&(s%b==0)){ printf("%ld",s);return 0;}
	  s=s+a;
	}
	return 0;
}
