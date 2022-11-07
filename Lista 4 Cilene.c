#include <stdio.h>





int main () {
int	matriz[2][2], l, c;

for(l = 0; l < 2; l++) {
	for(c = 0; c < 2; c++)
	scanf("%d", &matriz[l][c]);
}

for(l = 0; l < 2; l++) {
	for(c = 0; c < 2; c++){
	if(c != 1)
	printf("%d    ", matriz[l][c]);
	else
	printf("%d\n", matriz[l][c]);
}
}
 
}
