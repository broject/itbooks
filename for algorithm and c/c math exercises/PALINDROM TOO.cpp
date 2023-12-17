#include<stdio.h>
int main()
{
	int a,b,c,d,i,p,s;
	scanf("%d",&p);
	a=p/10000;
	b=p%10000/1000;
	c=p%10000%1000/100;
	d=p%10000%1000%100/10;
	i=p%10000%1000%100%10;
	s=((i*10000)+(d*1000)+(c*100)+(b*10)+a);
     if(p==s) printf("YES");
	 else printf("NO");
	return 0;
}
