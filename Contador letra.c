#include <stdio.h>





int main () {
	char frase [100];
	char l;
	int len, n = 0, i;
	
	
	
	printf("Digite uma frase de ate 100 caracteres: ");
	fflush(stdin);
	gets(frase);
	
	printf("\n Digite uma letra: ");
	scanf("%c", &l);
	
	len = strlen(frase);
	for(i = 0; i < len; i++) {
		if(frase[i] == l)
		n++;
	}
	
	printf("\nA letra aparece %d vezes na frase.", n);
	
	
}
