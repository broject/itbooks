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
	
	if(k%2==0) 
	n=n+k;}
	printf("%d",n);
	system("pause");
	return 0;
}
