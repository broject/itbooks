#include<stdio.h>
int main()
{
	int d,h;
	int a[10];
	scanf("%d",&h);
	for(int i=2;i<=9;i++)
	{
	 scanf("%d",&a[i]);
	 h=h^a[i];
	 }
	printf("%d",h);	
}
