#include<stdio.h>
int anh (int x)
{ int s=0;
	for(int i=1;i<=x;i++)
	if(x%i==0) s++;
	if(s==2) return 1;
	else return 0;
}

int main()
{
	int n,i,j,s=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{ 
	 if(anh(i)) printf("%d",i); 
	}
		
}
