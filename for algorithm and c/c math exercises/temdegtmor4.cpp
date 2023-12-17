#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char a[101];
	int s=0,i,l=0;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
	
	if(a[i]=='a') s++;
	
		if(a[i]=='o') l++;
	
   }
printf("%d\n",s);
printf("%d",l);
}
