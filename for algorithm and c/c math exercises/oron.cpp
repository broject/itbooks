#include<stdio.h>
int main()
{
	int a,s,n,b;
	freopen("oron.in","r",stdin);
	freopen("oron.out","w",stdout);
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	s=a*b;
   if(s%2==0)	printf("OK");
   else printf("NO");
    // return 0;
}
