#include <stdio.h>

int palidromo( int num) {
	int resto = 0, aux;
	aux = num;
	while ( num > 0) {
		resto = resto*10 + (num%10);
		num = (int)num/10;
	}
	
	if (resto == aux) {
		printf("sim");
	} else {
		printf("nao");	
	}
	
}

void main () {
	int num,i;
	scanf("%d", &num);
 	palidromo(num);
}
