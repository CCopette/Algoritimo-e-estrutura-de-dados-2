#include <stdio.h>


float calculamedia(float x, float y) {
	int retorno;
	retorno = (x + y)/2;
	return retorno;
}


float lenota () {
	float x;
do {
	scanf("%f", &x);
	if(x > 10 || x < 0)
	printf("\nNota entre 0 e 10\n");
} 	while(x > 10 || x < 0);
return x;
}




int main () {
	int i;
	float mediaSala = 0;
	const define = 5;
	struct alunos {
		float n1;
		float n2;
		int matricula;
		float media;
	}; struct alunos aln[define];
	
	
	for(i = 0; i < define;i++) {
		printf("-------Aluno %d-------", i+1);
		
		printf("\nMatricula : ");
		scanf("%d", &aln[i].matricula);
		
		printf("N1: ");
		aln[i].n1 = lenota();
		mediaSala += aln[i].n1;
		
		printf("N2: ");
		aln[i].n2 = lenota();
		mediaSala += aln[i].n2;
		
		aln[i].media = calculamedia(aln[i].n1, aln[i].n2);
		
		
	}
	mediaSala = mediaSala/(define*2);
	
	for(i = 0; i < define;i++) {
		printf("\n\n\n---------Boletim do aluno %d--------", i+1);
		printf("\nNota N1: %.2f", aln[i].n1);
		printf("\nNota N2: %.2f", aln[i].n2);
		if(aln[i].media >= mediaSala)
		printf("\nMedia do aluno = %.2f\n Maior ou igual a media", aln[i].media);
		else
		printf("\nMedia do aluno = %.2f\n Menor que a media", aln[i].media);
		}
		
		printf("\n\n-------Resumo da sala-------");
		printf("\nTotal de alunos = %d", i);
		printf("\nMedia = %.2f", mediaSala);
	}
	
	
	
	
	
	

