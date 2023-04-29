#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista
{
	int info;
	Lista *prox;	
};

/* Cria uma lista vazia.*/
Lista* lst_cria()
{
	return NULL;
}

/*Verifica se uma lista é vazia*/
int lst_vazia(Lista *l)
{
	return (l == NULL);
}

/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info)
{
	Lista *ln = (Lista*)malloc(sizeof(Lista));
	ln->info = info;
	ln->prox = l;
	return ln;
}

/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info)
{
	Lista *lAux = l;
	
	while(lAux != NULL)
	{
		if(lAux->info == info)
		{
			return lAux;
		}
		else
		{
			lAux = lAux->prox;
		}
	}
	
	return NULL;
}

/* Imprime uma lista.*/
void lst_imprime(Lista *l)
{
	Lista *lAux = l;
	
	while(lAux != NULL)
	{
		printf("INFO = %d\n", lAux->info);
		lAux = lAux->prox;
	}
}

/*Remove o elemento de uma lista e retorna a lista alterada*/
Lista* lst_remove(Lista *l, int info)
{
	if(l != NULL)
	{
		
		Lista *lAux = l->prox;
		
		/*Se o elemento for a cabeça da lista*/
		if(l->info == info)
		{
			free(l);
			return lAux;
		}
		else
		{
			Lista *lAnt = l;
			
			while(lAnt != NULL)
			{
				if(lAnt->info == info)
				{
					lAnt->prox = lAux->prox;
					free(lAux);
					break;
				}
				else
				{
					lAnt = lAux;
					lAux = lAux->prox;
				}
			}
		}
	}
	return l;
}

/* Libera o espaço alocado por uma lista.*/
void lst_libera(Lista *l)
{
	Lista *lProx;
	
	while(l != NULL)
	{
		lProx = l->prox;
		free(l);
		l = lProx;
	}
}

/*Retorna o número de nós de uma lista.*/
int comprimento(Lista *l)
{
	Lista *aux = l;
	int cont;
	
	while(aux != NULL)
	{
		cont++;
		aux = l->prox;
	}
	
	return cont;
}










