#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	char a[1001];
long long i,n,s,j;
	scanf("%lld",&n);
	a[1]=2;
	a[2]=26;
	a[3]=386;
    
	for(i=4;i<n;i++)
	{
	a[i]=a[i-1]+(i-1)*i+i*(i+1);	
  }
	printf("%lld",a[n]);
}
