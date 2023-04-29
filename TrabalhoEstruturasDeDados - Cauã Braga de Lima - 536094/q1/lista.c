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

Lista* lst_remove_rec(Lista *l, int info)
{
	if(!lst_vazia(l))
	 if(l->info==info)
	 {
		Lista* lAux = l;
		l = l->prox;
		free(lAux);
	 }
	 else
	 {
		l->prox = lst_remove_rec(l->prox,info);
	}
	return l; 
}

void lst_imprime_invertida_rec(Lista* l)
{
	if(lst_vazia(l))
		return;
	else
	{
	lst_imprime_invertida_rec(l->prox);
	printf("info: %d\n",l->info);
	}
 }


/*Retorna o número de nós de uma lista.*/
int comprimento(Lista *l)
{
	Lista *aux = l;
	int cont = 0;
	
	while(aux != NULL)
	{
		cont++;
		aux = aux->prox;
	}
	
	return cont;
}

/*Retorna o número de nós da lista que possuem o campo info menor do que n*/
int menores(Lista *l, int n)
{
	Lista *lAux = l;
	int cont;
	
	while(lAux != NULL)
	{
		if(lAux->info < n)
		{
			cont++;
		}
		else
		{
			lAux = lAux->prox;
		}
	}
	
	return cont;
}

/*Retorna a soma de todos os campos info*/
int soma(Lista *l)
{
	Lista *lAux = l;
	int soma;
	
	while(lAux != NULL)
	{
		soma += lAux->info;
		lAux = lAux->prox;
	}
	
	return soma;
}

int num_primo(int num)
{
	int i;
	int cont;
	
	for(i = 2; i < num/2; i++)
	{
		if(num % i == 0)
		{
			cont++;
		}
	}
	
	if(cont == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*Retorna o número de nós com os campos info que são números primos*/
int primos(Lista *l)
{
	Lista *aux = l;
	int cont = 0;
	
	while(aux != NULL)
	{
		if(num_primo(aux->info))
		{
			cont++;
		}
		
		aux = aux->prox;	
	}
	
	return cont;
}

/*Retorna a concatenação de duas listas l1 e l1*/
Lista* lst_conc(Lista* l1, Lista* l2)
{
	Lista *aux = l1;
	Lista *aux1 = l1;
	
	while(aux1 != NULL)
	{
		aux = aux->prox;
	}
	
	aux1->prox = l2;
	l2 = NULL;
	
	return aux;	
}

/*Retorna uma lista com as intersecções entre duas listas.*/
Lista* lst_diferenca(Lista* l1, Lista* l2)
{
	Lista *aux1 = l1;
	Lista *aux2 = l2;
	
	int t1 = comprimento(l1);
	int t2 = comprimento(l2);
	
	int i;
	for(int i; i < t2; i++)
	{
		if(aux1->info == aux2->info)
		{
			
		}
	}
}











