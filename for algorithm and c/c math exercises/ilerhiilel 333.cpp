#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,k;
	scanf("%f",&x);
	y=(x*x*x)+5*(x*x)-3*x+7;
	k=y/x+4;
	printf("%.3f",k);
	return 0;
}
