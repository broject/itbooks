#include<stdio.h>

int main()
{
	int a,b,c,n,i;
	scanf("%d",&n);
	for(i=100;i>=999;i++)
	
	a=n/100;
	b=n%100/10;
	c=n%100%10;

	
	    
	if(((a<b)&&(b<c))||((c<b)&&(b<a)))printf("%d",b);
else if((a>c)&&(b<c)) printf("%d",c);
 else if ((b<a)&&(a<c))printf("%d",a);
 else if(())	
 	   
	return 0;


}
