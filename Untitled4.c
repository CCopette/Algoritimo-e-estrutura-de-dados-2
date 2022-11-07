#include <stdio.h>

    int main () {
        int numero[3], i, maior, p;

        printf("Insira 3 numeros inteiros");
        for (i = 0; i < 3; i++) {
            scanf("%d", &numero[i]);

        if (i == 0) {
        p = 1;
        maior = numero[i];
        }
        else {


            if (numero[i] > maior) {
            maior = numero[i]; 
            p= i+1;
            }
        }
        }

        printf("A posicao do maior numero e: %d", p);
    }
