#include<iostream.h>
#include<stdlib.h>

typedef int data;

struct bo
{
	const char *value;
	data id;
};


void main()
{
	bo a[255];

	int N,K=0;
	cout<<"Heden mangas oruulah ve? ";cin>>N;
	for(int i=0; i<=N; i++){
		a[i].value = "Mangas";
		a[i].id = i+1;
	}
	a[i-1].id = 0;
	cout<<"Heddugeer mangasaas ehlen ustgah ve? ";cin>>K;
	i=0;
	a[K].value ="Dead!";
	K=a[K].id;
		while (a[K].value != "Dead!"){
			a[K].value ="Dead!";
			cout<<K<<"	";
			K = a[K].id;
		}
	cout<<endl<<"Mangas deaded!"<<a[K-1].value<<"  id="<<K<<endl;
	return;

}
