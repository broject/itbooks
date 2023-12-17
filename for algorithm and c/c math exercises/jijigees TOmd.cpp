#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char a,b,c;
	cin>>a>>b>>c;
	if(a<97) printf("%c ", a);
	    else printf("%c ", a-32);
     if(b<97) printf("%c ", b);
     	else printf("%c ",b-32);
     if(c<97) printf("%c ", c);
     	else printf("%c ", c-32);
     	
}
