#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b<c<d) printf("%d",a);
	else if(b<c<d<a) printf("%d",b);
	else if(c<d<a<b) printf("%d",c);
	else if(d<a<b<c) printf("%d",d);
	return 0;
	
	
	
	
	}
