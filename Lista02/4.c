#include <stdio.h>
#include <math.h>


float soma(float b, float c) {
	float som = b+c;
	if(fmod(som,1) == 0) {
		printf("%d", (int)som);
	} 
	else {
		printf("%.2f", som);
	}	

}

float sub(float b, float c) {
	float sub = b-c;
	if(fmod(sub,1) == 0) {
		printf("%d", (int)sub);
	} 
	else {
		printf("%.2f", sub);
	}	

}

float mult(float b, float c) {
	float mult = b*c;
	if(fmod(mult,1) == 0) {
		printf("%d", (int)mult);
	} 
	else {
		printf("%.2f", mult); 
	}	

}

float div(float b, float c) {
	float div = b/c;
	if(fmod(div,1) == 0) {
		printf("%d", (int)div);
	} 
	else {
		printf("%.2f", div);
	}	

}

float pot(float b, float c) {
	float pot = pow(b,c);
	if(fmod(pot,1) == 0) {
		printf("%d", (int)pot);
	} 
	else {
		printf("%.2f", pot);
	}	

}

void main() {
	int a;
	float b,c;
	scanf("%d %f %f", &a, &b, &c);

	switch(a)
	{
		case 1:
			soma(b,c);
			break;
		case 2:
			sub(b,c);
			break;
		case 3:
			mult(b,c);
			break;
		case 4:
			div(b,c);
			break;
		case 5:
			pot(b,c);
			break;
			
	}
}
