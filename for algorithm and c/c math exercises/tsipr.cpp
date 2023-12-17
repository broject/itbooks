#include<stdio.h>
#include<cstring>
using namespace std;
char a[1000001];
int main()
{
	
	int i,s=0;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		s=s+(a[i]-48);
		
		
	}
	printf("%d",s);
}
