#include<stdio.h> 


main(){ 

int a,b,c,d,n,m,k,l,s; 

scanf("%d%d%d%d",&a,&b,&c,&d); 

if(a>80) n = a; 

else n = 0; 

if(b>80) m = b; 

else m = 0; 

if(c>80) k = c; 

else k = 0; 

if(d>80) l = d; 

else l = 0; 

s = n + m + k + l; 

printf("%d",s);	

}
