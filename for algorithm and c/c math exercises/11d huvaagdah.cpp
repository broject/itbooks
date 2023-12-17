#include<stdio.h>
int main()
{
int a,b,c,d,s;
scanf("%d%d%d%d",&a,&b,&c,&s);
if(a%11!=0) a=a;
else a=0;
if(b%11!=0) b=b;
else b=0;
if(c%11!=0) c=c;
else c=0;
if(s%11!=0) d=d;
else s=0;
d=s+c+b+a;
printf("%d",d);
}
