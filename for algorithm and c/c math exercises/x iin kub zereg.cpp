#include<stdio.h>
#include<math.h>
int main ()
{
	int x,k;
	scanf("%f",&x);
	k=(pow(x,3)+5*pow(x,2)-3*x-7)/x+4;
	printf("%.3f",k);
	return 0;
}
