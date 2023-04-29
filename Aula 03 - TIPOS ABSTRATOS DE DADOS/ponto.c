#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"


struct ponto 
{
	float x;
	float y;
};

Ponto* criar_ponto(float x, float y)
{
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	
	if(p == NULL)
	{
		printf("Memória Insuficiente!");
		exit(1);
	}
	
	p->x = x;
	p->y = y;
	
	return p;
}

void liberar_ponto(Ponto *p)
{
	free(p);
}

void acessar_ponto(Ponto *p, float *x, float *y)
{
	*x = p->x;
	*y = p->y;
}

void atribuir_ponto(Ponto *p, float x, float y)
{
	p->x = x;
	p->y = y;
}

float distancia_pontos(Ponto *p1, Ponto *p2)
{
	float distancia_x = (p2->x) - (p1->x);
	float distancia_y = (p2->y) - (p1->y);
	
	return sqrt(distancia_x*distancia_x) + (distancia_y*distancia_y);
}


