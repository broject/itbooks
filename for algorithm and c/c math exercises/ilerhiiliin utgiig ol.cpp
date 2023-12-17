#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,s;
	scanf("%f",&x);
	y=(x*x*x)+5*(x*x)-3*x+7;
	s=y%x+4;
	printf("%f",s);
	return 0;
}
