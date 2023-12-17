#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	s=s*i;
	if(s==i) 	printf("%d",s);
else printf("NO");
	
	
}
}
