#include<stdio.h>
int main()
{
int k,n,i,s,a;
scanf("%d",&k);
for(i=10;i<100;i++){
 


a=i%10;
s=s+a;
i=i/10;
}
if(s==k){
printf("%d",i);
}}

