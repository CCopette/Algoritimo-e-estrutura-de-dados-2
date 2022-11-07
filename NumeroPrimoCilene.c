#include <stdio.h>


int primo (int x) {
	int i, primo1 = 1;
	for(i = 2; i < x; i++) {
		if(x%i == 0)
		primo1 = 0;
	}
	return primo1;
}


int main () {
int n, i, soma=0, p=0, ret;
scanf("%d", &n);
for(i = 2; p != n; i++) {
	ret = primo(i);
	if(ret == 1) {
		soma += i;
		p++;
	}
}
printf("Soma = %d", soma);
	
}
