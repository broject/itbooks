#include<stdio.h>
main()
{ int a;
scanf("%d",&a);
if(1<=a&&a<=100)
if(a>89)
printf("A");
else
if(79<a&&a<=89)
printf("B");
else
if(69<a&&a<=79)
printf("C");
else
if(59<a&&a<=69)
printf("D");
else
if(1<=a&&a<=59)
printf("F");
return 0;
}
