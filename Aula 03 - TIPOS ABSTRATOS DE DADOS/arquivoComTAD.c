#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
	Ponto *p1 = criar_ponto(2.0, 3.0);
	Ponto *p2 = criar_ponto(5.7, 6.5);
	
	printf("%f", distancia_pontos(p1, p2));
}
