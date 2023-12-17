#include<stdio.h>
#include<string.h>
using namespace std;
char a[101];
int main()
{
	
	int i,b;
	gets (a);
	for(i=0;i<=strlen(a);i++)
	{
	 if(a[i]==','&&a[i+1]=='-') {
	 	printf("YES\n");return 0;
	 }	
	}
	 
	printf("NO");
}
