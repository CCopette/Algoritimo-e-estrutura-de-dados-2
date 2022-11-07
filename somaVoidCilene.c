#include <stdio.h>


void soma (int *s, int a, int b) {
	*s = a+b;
}


int main () {
	int a, b, som;
	scanf("%d", &a);
	scanf("%d", &b);
	soma(&som, a, b);
	printf("Soma = %d", som);
}
