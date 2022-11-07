#include <stdio.h> 

int checa_min(int x) {
	while(x > 59 || x < 0 ) {
		printf("Invalido\n");
		scanf("%d", &x);
	}
	return x;
}

int checa_hora(int x) {
	while(x > 23 || x < 0 ) {
		printf("Invalido\n");
		scanf("%d", &x);
	}
	return x;
}
int horas (int x, int y) {
	int ret;
	if(y >= x)
	ret = y - x;
	else 
	ret = (24 - x) + y;
	return ret;
}
int minutos (int x, int y) {
	int ret;
	if(y >= x)
	ret = y - x;
	else 
	ret = (60 - x) + y;
	return ret;
}
int subtraiHora (int x, int y) {
	int ret = 0;
	if(y > x) {
	ret = 1; }
	return ret;
}


int main () {
	int hc, hf, mc, mf, resh, resm, s = 0; 
	printf("Hora que começou o jogo: ");
	scanf("%d", &hc);
		hc = checa_hora(hc);
		printf("Minuto que começou o jogo: ");
	scanf("%d", &mc);
	mc = checa_min(mc);
		printf("Hora que terminou o jogo: ");
	scanf("%d", &hf);
		hf = checa_hora(hf);
		printf("Minuto que terminou o jogo: ");
	scanf("%d", &mf);
		mc = checa_min(mc);
		resh = horas(hc,hf);
		resm = minutos(mc,mf);
		s = subtraiHora(hc, hf);
		resh -= s;
		printf("O jogo durou %d horas e %d minutos\n%d", resh, resm, s);
}
