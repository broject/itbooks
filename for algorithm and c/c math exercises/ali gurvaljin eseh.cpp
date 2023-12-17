#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(b<c)&&(a<c)) printf("Right");
    if((a>b)&&(b>c)&&(a<c)) printf("Obtuse");
    if((a<b)&&(b>c)&&(c>a)) printf("Acute");
}
