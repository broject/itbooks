#define n 10
#include<iostream.h>
#include<stdlib.h>
#include<time.h>


void main(){
	
	
	cout<<"Welcome to C++."<<endl;	
	
	int a[n]; int i,j;
	for(i=0;i<n;i++){
		a[i]=rand()%100;	
	}
	//insertionsort starting...

	for(i=1;i<n;i++)
		for(j=n;j>1;j--)
			if (a[j]<a[j-1]){ 
				int temp;
				temp=a[j]; a[j]=a[j-1]; a[j-1]=temp;
			}	
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	//	cout<<"end: "<<time(&t)<<endl;
}
