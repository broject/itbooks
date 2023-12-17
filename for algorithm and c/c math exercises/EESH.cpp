#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int i=1,j,n,q,a[101],b[101];
	
	while(~scanf("%d",&q))
	{
	a[i]=q;
	b[i]=q;
    i++;
	}
	sort(a+1,a+i);
		n=i-1;
	{
		for(i=n;i>=1;i--)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i]==b[j]&&a[i]!=20220) { printf("%d\n",j); b[j]=20220; break;
				}
			}
		}
	}
}
