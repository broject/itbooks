#include<stdio.h>
int main()
{
	int a, b, c, d, g;
	scanf("%d%d",&a, &b);
	c=a;
	for(int i=a; i!=0; i--){
	if(a%i==0){
	if(b%i==0){
	d=b/i;
	g=a/i;
	break;
}
}
}
printf("%d/%d",g, d);
}
