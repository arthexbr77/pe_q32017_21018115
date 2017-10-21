#include <stdio.h>

int detobi(int a) {
	int b[50],i = 0, j;
	while (a > 0) {
		b[i] = a%2;
		i++;
		a = a/2;
	}
	
	for (j = i - 1; j >= 0; j--) {
		printf("%d", b[j]);
	}
}

int bitode (int a) {
	int dec = 0, d = 1;
	do {
		dec = dec + (a%10)*d;
		d = d*2;
		a = a/10;
	}while (a!=0);

	printf("%d", dec);
}

void main() {
	int a,b;
	scanf("%d %d", &a, &b);
	switch (b) {
		case 1:
			detobi(a);
			break;
		case 2:
			bitode(a);
			break;	
	}	
	
}
