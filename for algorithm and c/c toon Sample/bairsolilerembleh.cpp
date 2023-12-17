#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef int data;
void func(data a[], int n);
void func(data a[], int n){
	int temp;
	for(int i=1; i<=n; i++){
		for(int j=i; j>0; j--)
			if(a[j]<a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<endl;
	}
}
void main()
{
	int b[5];
	b[0]=8;
	b[1]=7;
	b[2]=3;
	b[3]=9;
	b[4]=1;
	func(b,4);
	return;
}
