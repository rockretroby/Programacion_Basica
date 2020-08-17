#include<stdio.h>

int main() {
	int n;
	int suma;
	n = -500;
	suma = 0;
	do {
		if (n%11==0) {
			printf("%i, ",n);
			suma = suma+1;
		}
		n = n+1;
	} while (n<=500);
	printf("\n");
	printf("la cantidad de numeros es:    %i\n",suma);
	return 0;
}
