#include<stdio.h>
int main()
{
	int a,b,c,n,i;
	scanf("%d",&n);
	for(i=100;i>=999;i++)
	a=n/100;
	b=n%100/10;
	c=n%100%10;
	if((a<b)&&(b<c)&&(a<c)) printf("%d",b);
else	if((a<c)&&(c<b)&&(a>b)) printf("%d",c);	
 else  if ((b<a)&&(a<c)&&(c>b))  printf("%d",a);		   
	return 0;
}

