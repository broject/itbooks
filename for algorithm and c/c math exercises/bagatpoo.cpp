#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string a;
	char t;
	int n,m,k,i;
	int r=0;
	cin>>a;
	sort(a.begin(),a.end());
	if(a[0]!='0') cout<<a;
	else {
	
	for(i=0;i<a.size();i++)
	{
		if(a[i]!='0') {
			k=i; 
			break;
		}
	 	
	} 
        t=a[0];
        a[0]=a[k];
        a[k]=t;
		cout<<a;
		}

}
