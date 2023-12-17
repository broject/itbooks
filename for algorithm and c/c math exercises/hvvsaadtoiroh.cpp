#include<stdio.h>
 long long a[101];
 int main()
 {
 	long long n,m,i,k;
 	scanf("%lld%lld",&n,&k);
     
 	{ 
 	   	a[1]=1;
 		a[2]=2;
 		a[3]=3;
 		
 	    	for(i=4;i<=n;i++)
 	    	{
 	    		a[k]=0;
 	         if(a[i]!=0)  a[i]=a[i-1]+a[-2];		
			 }
 		
	 
}
	 printf("%lld",a[n]);
 }
