#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	a=n/100;
	b=n%100/10;
	c=n%100%10;
    
	if((a<b)&&(b<c)) printf("%d",b);
else	if((a<c)&&(c<b)) printf("%d",c);	
 else  if ((b<a)&&(a<c))  printf("%d",a);		   
	return 0;
}

