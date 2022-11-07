#include <stdio.h>


int verificaTriangulo (int a, int b, int c) {
    int ret = 0;
	if(a+b > c && b+c > a && a+c > b)
	ret = 1;
	return ret;

}

char tipoTriangulo(int a, int b, int c) {
    int tipo;
	if(a == b && b == c)
    tipo = 1;
    else {
    if(a == b || b == c || a == c)
    tipo = 2;
    else 
    tipo = 3;
    }
    return tipo;
}



int main () {
	int l1,l2,l3, T, ret;
	printf("Digite 3 lados de um triangulo\n");
	scanf("%d", &l1);
	scanf("%d", &l2);
	scanf("%d", &l3);
	ret = tipoTriangulo(l1,l2,l3);
	T = verificaTriangulo(l1,l2,l3);
	if(T == 0)
	printf("Nao e triangulo");
	else {
	if(ret == 1)
	printf("Triangulo retangulo");
	else {
		if(ret == 2)
	printf("Triangulo isoceles");
		else 
		printf("Triangulo escaleno");
	}
	}

	
}
