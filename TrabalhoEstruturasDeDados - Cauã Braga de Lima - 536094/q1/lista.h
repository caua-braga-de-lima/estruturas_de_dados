typedef struct lista Lista;

/* Cria uma lista vazia.*/
Lista* lst_cria(); 

/* Testa se uma lista � vazia.*/
int lst_vazia(Lista *l); 

/* Insere um elemento no in�cio da lista.*/
Lista* lst_insere(Lista *l, int info); 

/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info); 

/* Imprime uma lista.*/
void lst_imprime(Lista *l); 

/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info); 

/* Libera o espa�o alocado por uma lista.*/
void lst_libera(Lista *l);

/*Remove um elemento de uma lista usando recurs�o.*/
Lista* lst_remove_rec(Lista *l, int info);

/*Imprime uma lista encadeada invertida usando recurs�o.*/
void lst_imprime_invertida_rec(Lista *l);

/*1. a) fun��o que calcule o n�mero de n�s de uma lista. Essa fun��o deve obedecer ao
prot�tipo:
*/
int comprimento(Lista* l);

/*2. b) fun��o para retornar o n�mero de n�s da lista que possuem o campo info com valor
menor que n. Essa fun��o deve obedecer ao prot�tipo:
*/
int menores(Lista* l, int n);

/*c) fun��o para somar os valores do campo info de todos os n�s. Essa fun��o deve
obedecer ao prot�tipo:
*/
int soma(Lista *l);

/*d) fun��o para retornar o n�mero de n�s da lista que possuem o campo info com
n�mero primo. Essa fun��o deve obedecer ao prot�tipo:*/
int primos(Lista *l);

/*e) fun��o para criar uma lista que � a concatena��o de uma lista l2 no final de uma lista
l1. Essa fun��o deve obedecer ao prot�tipo:*/
Lista* lst_conc(Lista* l1, Lista* l2);

/*f) fun��o que fa�a a diferen�a de duas listas L1 e L2 (ou seja, que retire de L1 os
elementos que est�o em L2). Por exemplo, se lista L1 ? 3 ? 7 ? 2 ? 4 ? // e lista L2
? 7 ? 9 ? //, a lista L1 modificada deve ser L1 ? 3 ? 2 ? 4 ? //. Essa fun��o deve
obedecer ao prot�tipo:
*/
Lista* lst_diferenca(Lista* l1, Lista* l2);



