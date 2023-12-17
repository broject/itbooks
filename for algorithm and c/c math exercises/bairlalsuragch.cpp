#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
string a,b,c,d,f;
string Ret(int n)
{
	char q;
	b.clear();
   while(n!=0)
   {
   	q=(n%10+48);
   n=n/10;
   	b=q+b;
   }
   return b;
   
}
int main()
{
	int n,j,r,z;
	cin>>n;
	c=Ret(n);
	for(int i=1;i<=n;i++)
	{
		j=i;
		f=f+Ret(j);
		
	}
	j=0;
	for(int i=0;i<f.size();i++)
	{
		if(f[i]==c[j])
		{
			z=i+1; int ok=1;
			for(r=j+1;r<c.size();r++)
			if(f[z]==c[r])
			{
				ok=0;
				z++;
			}
			else{
				ok=1;break;
			}
			if(ok==0){
				cout<<i+1; return 0;
			}
		}
	}
	cout<<f<<endl;
}
