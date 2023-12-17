#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char  a[101];
int main()
{

    int s=0,i;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	if((a[i]=='k')||(a[i]=='K')) s++;
	printf("%d",s);
	  
}
