#include<stdio.h>
int main(void)
{
	long a,b,c,n,min;
	scanf("%ld%ld",&a,&b);
	if(a>b) min=b;
	else min=a;
	while(true)
	{
		if((a%min==0)&&(b%min==0)) {printf("%ld",min); return 0;}
		else min=min-1;
	}
	return 0;
}
