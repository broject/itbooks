#include<iostream.h>
#include<stdlib.h>

void main()

{
	color(0);
	int N,K,G,i,j,l;
	int a[1000],b[400],c[400];
	N=rand()%1001;K=N;
	for(i=1; i<=1000; i++){
		if(N==i)
		a[i]=1;
		else
			a[i]=2;
		
	}cout<<"1000 zoosond duriin neg ni hongonoor zohiogdloo."<<endl;
	for(i=1; i<=1000; i++){
		if(N==i){
			a[i]=1;cout<<a[i]<<"  ";}
		else{
			a[i]=2;cout<<a[i]<<"  ";}
		
	}
	int s1=0,s2=0;N=800;G=400;
	int tool=1;
t:	for(i=1; i<=N; i++){
		if(i>G&&i<=N)
		s2+=a[i];
		else
			s1+=a[i];
	} if(tool==7) goto e;
	if(s1<s2)
		{N=700;G=550;tool+=1;goto t;}
	else if(s1==s2)
		{N=1000;G=900;tool+=1;goto t;}
	else
		{N=300;G=150;tool+=1;goto t;}
e:	cout<<"Uildliin too ="<<tool<<endl;
	cout<<"Busdaasaa hongon element ="<<K<<"-p bairshliin "<<a[K]<<" huvisagch baina."<<endl;

	return;
}