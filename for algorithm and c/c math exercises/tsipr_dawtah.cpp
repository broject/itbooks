#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,k,n=0,b;
	scanf("%d%d",&a,&b);
	while(a>0)
	{
		k=a%10;
		a=a/10;
	
	if(k==b) 
	n=n+1;
}
	printf("%d",n);
	
	return 0;
} 
