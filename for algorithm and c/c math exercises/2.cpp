#include<stdio.h>
#include<math.h>
int main()
{
	int a,s=1,i;
	scanf("%d",&a);
	for(i=1;;i++)
	{
		s=s*i;
		if(s==a){
			printf("%d",i);
			return 0;
		}
		if(i>a) { printf("NO");
		return 0;
	}
		}
	} 
