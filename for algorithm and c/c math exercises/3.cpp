#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,d;
	scanf ("%f%f%f",&a,&b,&c);
	d=sqrt(b*b-4*a*c);	
{if(d==0)
x1=-b/(2*a);
printf("%.2f",x1);}
{
else 
if (d>0)
x1=(-b+d)/2*a;
x2=(-b-d)/2*a;
printf ("%.2f%.2f",x1);
printf("\%.2f",x2);}
else printf ("problem");
	return 0;
}
