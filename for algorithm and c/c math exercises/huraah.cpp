#include<stdio.h>
int main()
{
	int a,b,k,i,n;
	scanf("%d%d",&a,&b);
	if(a<b)
	for(i=2;i<=a;i++)
	if((a%i==0)&&(b%i==0)) 
	k=a/i;
	n=b/k;
	printf("%d %d",k,n);
	return 0;
}
