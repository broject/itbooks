#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[101];
	int s=0,i;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	if(a[i]=='M') s++;
	printf("%d",s);
	  
}
