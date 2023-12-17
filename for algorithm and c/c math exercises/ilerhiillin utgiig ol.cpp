#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	y=(x*x*x)+5*pow(x,2)-3*x+7/x+4;
	printf("%f",y);
	return 0;
}
