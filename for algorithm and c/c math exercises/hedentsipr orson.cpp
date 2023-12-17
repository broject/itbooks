#include<stdio.h>
int main()
{
	int n,k,c,s=0;
	scanf("%d%d",&n,&c);
	while(n>0)
	{
		k=n%10;
		n=n/10;
		if(k==c) s=s+1;
}
		printf("%d",s);

}
