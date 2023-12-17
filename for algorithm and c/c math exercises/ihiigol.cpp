#include<stdio.h>
int ikh (int a, int b)
{
	int k;
  if(a>b) k=a;
  else k=b;
  return k;
}
int main()
{
	int a,b,c,d,k;
	scanf("%d%d%d%d",&a,&b,&c,&d);
     printf("%d",ikh(ikh(ikh(a,b),c),d));
}
