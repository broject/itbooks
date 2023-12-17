#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,k,n=0;
	scanf("%d",&a);
	while(a>0)
	{
		k=a%10;
		a=a/10;
	
	if(k%2==1) 
	n=n+1;}
	printf("%d",n);
	
	return 0;
} 
