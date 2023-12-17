#include<stdlib.h>
#include<stdio.h>

int main(int argc, char argv[])
{
	int N,K;
	int Huudas=1,Mor;

	printf("Neg huudsand heden mor baih ve?");
	scanf("%d",&K);

	printf("Moriin too ve?");
	scanf("%d",&N);

	Huudas=Huudas+N/K;
	Mor=N%K;

	printf("%d - p huudasnii %d - p mor baina.", Huudas,Mor);

	return 1;
}