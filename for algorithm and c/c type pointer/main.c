#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 15;
	int *I = &a; 
    int b = I; //auto cast point to int
 
    char *str = "boroo"; 
    int *ptr = &a;
    
    int x = 200, y = 254;
    
    printf("&I=%p, I=%d (%x), %d\n", &I, I, I, *I);
    printf("&a=%p, a=%d (%x)\n", &a, a, a);
	printf("&b=%p, b=%d (%x)\n", &b, b, b);
	
	printf("str = %s, %p, %x, %d, ptr = %x\n", str, str, str, &str, ptr);
	prnt(str, ptr);
	
	printf("before swapping X = %d, %d, %x\n", &x, x, x);
    printf("before swapping Y = %d, %d, %x\n", &y, y, y);
    swap(&x, &y);
    printf("after swapping X = %d, %d, %x\n", &x, x, x);
    printf("after swapping Y = %d, %d, %x\n", &y, y, y);
	return 0;
}

void prnt (char *s, int *d) {
	printf("prnt = %s, %p, %x, %d, int = %x\n", s, s, s, &s, d);
}

void swap (int *a, int *b)
{
	int temp;
	
	printf("swapping temp = %d, %x\n", temp, temp);
	printf("swapping A = %d, %d, %x, %d\n", &a, a, a, *a);
	printf("swapping B = %d, %d, %x, %d\n", &b, b, b, *b);
	
	temp = *a; 
	*a = *b;
	*b = temp;
}
