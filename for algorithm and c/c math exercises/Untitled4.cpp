#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,d;
	scanf ("%f%f%f",&a,&b,&c);
	d=sqrt(b*b-4*a*c);	
{
if (d>0)
printf ("%.2f",(-b+d)/2*a);
printf("%.2f",(-b-d)/2*a);
else
printf("problem");}
	return 0;
}
