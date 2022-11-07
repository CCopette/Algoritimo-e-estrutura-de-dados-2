
#include <stdio.h> 
// classe aluno
typedef struct {
	char  nome[50];
	long  matricula;
	float n1;
	float n2;
	float media;
	
} aluno;


//verifica se a nota esta entre 0 e 10
float verifica_nota (float a)
{
	while(a > 10 || a < 0) 
	{
		printf("\nMin 0 - Max 10\n");
		scanf("%f", &a);
	}
	
	return a;
}


// guarda informaçoes dos alunos
aluno set_aluno (aluno a) 
{
	//nome
	printf("\n\n\nNome do aluno: ");
	fflush(stdin);
	gets(a.nome);
	
	//matricula
	printf("Matricula: ");
	scanf("%ld", &a.matricula);
	
	//nota 1
	printf("N1: ");
	scanf("%f", &a.n1);
	a.n1 = verifica_nota(a.n1);
	
	//nota 2
	printf("N2: ");
	scanf("%f", &a.n2);
	a.n2 = verifica_nota(a.n2);
	
	//media 
	a.media = (a.n1 + a.n2) / 2;
	
	
	return a;
}


// Exibe os dados 

void show_aluno (aluno a) 
{
	printf("\n-----Dados do aluno-----");
	
	printf("\n Nome: ");
	printf("%s", a.nome);
	
	printf("\n Matricula: ");
	printf("%d", a.matricula);
	
	printf("\n N1: ");
	printf("%.2f", a.n1);
	
	printf("\n N2: ");
	printf("%.2f", a.n2);
	
	printf("\n Media: ");
	printf("%.2f", a.media);
}





int main () {
	// variavel do tipo aluno
	aluno aln[10];
    
    // variavel de controle 
	int i;
	
	for(i = 0; i < 10; i++) 
	{		
	//chama a funçao set_aluno
	aln[i] = set_aluno(aln[i]);
    }
    
    for(i = 0; i < 10; i++)
	 {		
	//chama a funçao show_aluno
	show_aluno(aln[i]);
     }
	
	
}
