#include<stdio.h>
#include<math.h>
int main ()
{
	float a,p,s,h;
	scanf("%f",&a);
	p=a+a+a;
	
	s=a*a*sqrt(3)/4;
	printf("%.2f %.2f",p ,s);
	return 0;
}
