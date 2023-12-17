#include<stdio.h>
#include<math.h>
int main ()

	float a,p,s,h;
	scanf("%f",&a);
	p=a+a+a;
	h=a*sqrt(3)/2;
	s=a*h/2;
	printf("%.2f %.2f",p ,s);
	return 0;
}
