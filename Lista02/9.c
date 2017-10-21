#include <stdio.h>
int potencia(int a,int b) {
	if (b == 0) return 1;
	return a * potencia(a,b-1);
}

void main() {
	int a,b,pot;
	scanf("%d %d", &a, &b);
	pot = potencia(a,b);
	printf("%d", pot);
}


