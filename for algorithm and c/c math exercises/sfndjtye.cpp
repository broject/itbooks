#include<stdio.h>
int main()
{
    	
    	int d,n,k,s=0;
    	scanf("%d",&n);
    	k=n;
    	while(k>0)
    	{
    		d=k%10;
    		k=k/10;
    		s=s*10+d;
    	}
    	if(n==s)
    	printf("YES");
    	else printf("NO");
     
    	
    } 
