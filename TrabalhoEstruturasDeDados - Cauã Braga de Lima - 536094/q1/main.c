#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct lista
{
	int info;
	Lista *prox;
};

int main(int argc, char *argv[]) 
{
	Lista *l; 
	Lista *l2; 
	Lista *l3;
	
	
	l->info = 3;
	l->prox = l2;

	printf("test");
	l2->info = 4;
	l2->prox = l3;
	
	l3->info = 6;
	l3->prox = NULL;
	
	
	printf("Numero de nos: %d", comprimento(l));
	
	return 0;
}


