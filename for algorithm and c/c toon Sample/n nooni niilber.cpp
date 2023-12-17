#include<iostream.h>
#include<stdio.h>


void main()
{
	int i=0,n,s=0;
	cin>>n;
the:	
	if(i<n)
	{
		i=i+1;
		s=s+i;
		goto the;
	}
	cout<<"Niilber="<<s<<endl;
	return;
}