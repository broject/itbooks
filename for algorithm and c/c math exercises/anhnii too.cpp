#include<stdio.h>
int main()
{
	int a,n,i,s=0,l=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
 	if(a%i==0) s++; 
 	if(s==2) printf("yes");
 	else printf("no");
 	
 	
 	
}
