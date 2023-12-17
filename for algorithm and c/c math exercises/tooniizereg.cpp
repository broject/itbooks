#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,s=0;
	scanf("%d",&a);
	
		for(i=1;i<=a;i++){
		s=pow(a,i);
		printf("%d^%d=%d\n",a,i,s);}

}
