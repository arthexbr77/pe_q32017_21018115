#include <stdio.h>
#include <math.h>


void main() {

	float a,b,t,p,pi,a1;
	int i;
	a = 1;
	b = 1/sqrt(2);
	t = 0.25;
	p = 1;
	i = 0;
	while(i <= 10){
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*pow(a-a1,2);
		p = 2*p;
		a = a1;
		
		i++;

	}

	pi = pow(a+b,2)/(4*t);
	printf ("%.20f", pi);
	
}
