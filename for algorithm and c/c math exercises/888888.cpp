#include<stdio.h>
int main()
{
	int a,b,c,d,s,t;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a=s/1000;
	b=s%1000/100;
	c=s%1000%100/10;
	d=s%1000%100%10;
	t=b+c;
	if(t%2==0)printf("YES");
	else if(t%3==0)printf("NO");
    return 0;
    
}
