#include <stdio.h>
#include <math.h>
#define quantidade_de_pontos 3

typedef struct pontos {
      int x;
      int y;
    } ponto;
   
   
  float distancia (ponto a, ponto b) {
      float aux;
     
      aux = sqrt( pow(b.x- a.x, 2) + pow(b.y-a.y, 2) );
     
      return aux;
  }
   
   


int main ()
{
   ponto p[quantidade_de_pontos];
   float perimetro = 0;
   int i;
   
    p[0].x = -4;   p[0].y = 7;
    p[1].x = 2;   p[1].y = -9;
     p[2].x = 5;   p[2].y = 3;
   
     
    perimetro += distancia(p[0], p[1]);
    perimetro += distancia(p[0], p[2]);
    perimetro += distancia(p[1], p[2]);
   
    printf("Perimetro = %.2f", perimetro);
    printf("\nPontos acima do eixo x: \n");
    for(i = 0; i < quantidade_de_pontos; i++) {
    	if(p[i].x > 0)
    	printf("-%d\n", i);
	}
}


