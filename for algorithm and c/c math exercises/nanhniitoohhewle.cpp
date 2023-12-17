#include<stdio.h>
int main()
{
	int a,n,i,j,s=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(n=1;n<=a;n++)
        if(a%2!=0)
		  s++;
	}
		 printf("%d",s);
	
}
