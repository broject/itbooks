#include<stdio.h>
int main()
{
	int a,b,c,d,k,l=0,s=0;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
	if(a<0) l=l+1;
	if(b<0) l=l+1;
	if(c<0) l=l+1;
	if(d<0) l=l+1;
	if(k<0) l=l+1;
	printf("%d",l);
}
