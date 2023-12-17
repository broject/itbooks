#include<stdio.h>
int main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	freopen("tegsh.in","r",stdin);
	freopen("tegsh.out","w",stdout);
	s=a*b;
	if(s%2==0)
	printf("YES");
	else printf("NO");
	//return 0;
}
