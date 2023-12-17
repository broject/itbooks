#include<iostream.h>
#include<stdio.h>


void main()
{
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a<b)
		if(c<b) 
			cout<<"b="<<b<<endl;
		else 
			cout<<"c="<<c<<endl;
	else 
		if(c<a) 
			cout<<"a="<<a<<endl;
		else 
			cout<<"c="<<c<<endl;
 
		return;

}