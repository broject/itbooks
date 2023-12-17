#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>89) printf("A");
	else if(a>79) printf("B");
	else if(a>69) printf("C");
	else if(a>59) printf("D");
	else printf("F");
	return 0;
}
