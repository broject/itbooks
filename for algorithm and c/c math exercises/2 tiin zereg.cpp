#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	while(a%2==0)
	{
		a=a/2;}
		if(a==1)
		printf("YES");
		else printf("NO");
		return 0;

}
