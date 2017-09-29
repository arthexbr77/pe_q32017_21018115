#include <math.h>
#include <stdio.h>

#define CONST_RAMA  (2.0*sqrt(2)/9801)

int fatorial (int x) {
	int y = (x*4)-1;
	if (x == 0 || x == 1){
		x == 1;
		return x;
	}else {
	for (int n = 1;n <= y;n++){ 
		
		x = x*n;	
	}
	return x;
	}
}

float parcela (int y) {
	float parcela, fat, i, elev;
	int ele = y*4;
	i = (1103 + (26390*y));
	fat = fatorial (y);
	parcela = ((fat*i)/(pow(fat,4)*pow(396,ele)));
	return parcela;
		
}


float ramanujan (int k) {
	float inv_pi;
	float total = 0;
	for(int n = 0;n <= k,n++;){
		inv_pi= CONST_RAMA*parcela(n);
		total = total + inv_pi;
						
	}
	return total;
}

float main() {


	int numero;
	float inv_pi;

	scanf("%d", &numero);
	inv_pi = ramanujan (numero);
	printf("%f", inv_pi);

}

