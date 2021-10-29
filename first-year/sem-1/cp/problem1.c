#include<stdio.h>

int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9;

unsigned solve(unsigned n) {

	unsigned sol = 0;
	unsigned cifra;
	while(n) {
		cifra = n%10;
		if(cifra == 0)
			c0++;
		if(cifra == 1)
			c1++;
		if(cifra == 2)
			c2++;
		if(cifra == 3)
			c3++;
		if(cifra == 4)
			c4++;
		if(cifra == 5)
			c5++;
		if(cifra == 6)
			c6++;
		if(cifra == 7)
			c7++;
		if(cifra == 8)
			c8++;
		if(cifra == 9)
			c9++;
		n /= 10;
	}
	if(c9 == 1)
		sol = sol*10+9;
	if(c8 == 1)
		sol = sol*10+8;
	if(c7 == 1)
		sol = sol*10+7;
	if(c6 == 1)
		sol = sol*10+6;
	if(c5 == 1)
		sol = sol*10+5;
	if(c4 == 1)
		sol = sol*10+4;
	if(c3 == 1)
		sol = sol*10+3;
	if(c2 == 1)
		sol = sol*10+2;
	if(c1 == 1)
		sol = sol*10+1;
	if(c0 == 1)
		sol = sol*10;
	return sol;
}

int main() {
    printf("\n%d\n", solve(998776554));
    return 0;
}