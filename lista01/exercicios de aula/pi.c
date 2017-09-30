#include <stdio.h>
#include <math.h>
#define RAMA (2*sqrt(2)/9801)


int fatorial (int k) {

	int fat;
	for(fat=1;k>1;k--){
	fat = fat*k;		
	}
	return fat;
}

float dem (int k) {
	
	float d;
	d = pow(fatorial(k),4)*pow(396,(4*k));
	return d;
}


float soma (int k) {

	float inv = 0;

	for (float n = 0; n < k; n++){
		inv += fatorial(4*n)*(1103+(26390*n))/dem(n);	
	}
	return inv;

}

int main (){
	int k;
	float pi;
	float inv;
	printf("Escreva um número: ");
	scanf("%d", &k);
	pi = 1/(RAMA*soma(k));
	printf("%f", pi);
	
}

