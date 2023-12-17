#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double parseDouble(char *str) {
	char *eptr;
	char c, amt[18];
	int i, j = 0, l = strlen(str);
	double d;
	
	for (i = 0; i < l; i++) {
		c = str[i];
		if (c == ',' || j > 17)
			continue;
		else {
			amt[j] = c;
			j++;
			if (j < 18) 
				amt[j] = '\0';
		}
	}
	d = strtod(amt, &eptr);
	return d;
}

int parseInt(char *str) {
	char c, amt[14];
	int i, j = 0, l = strlen(str);
	
	for (i = 0; i < l; i++) {
		c = str[i];
		if (c == ',' || j > 13)
			continue;
		else {
			amt[j] = c;
			j++;
			if (j < 14) 
				amt[j] = '\0';
		}
	}
	return atoi(amt);
}

int main(int argc, char *argv[]) {
    double d;
	int i;
	char a[7];
	
	i = parseInt("076,543.21");
	printf("%d\n", i);
	
	d = parseDouble("09,876,543.214567");
	printf("%.4f\n", d);
	
	snprintf (a, 7, "076,543.210987654321");
	printf("%s\n", a);
    
	return 0;
}


