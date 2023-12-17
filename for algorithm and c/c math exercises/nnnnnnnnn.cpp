#include<stdio.h>

int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	a=n/100;
	b=n%100/10;
	c=n%100%10;

	
	    
if(((a<b)&&(b<c))||((c<b)&&(b<a))) printf("%d",b);

 else if (((b<a)&&(a<c))||((c<a)&&(a<b)))printf("%d",a);	
 else printf("%d",c);	   
	return 0;


}
