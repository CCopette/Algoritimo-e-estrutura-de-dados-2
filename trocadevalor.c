#include <stdio.h>


void troca (int *x, int *y) {
int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main () {
	int a=4, b=2;
troca(&a, &b);
	printf("A = %d\n B = %d", a, b);
}
