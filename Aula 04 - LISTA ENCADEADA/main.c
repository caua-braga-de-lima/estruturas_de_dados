#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct lista
{
	int info;
	Lista* prox;
};

int main(int argc, char *argv[]) 
{
	Lista *l;
	lst_insere(l, 3);
	
	printf(l.info);
}
