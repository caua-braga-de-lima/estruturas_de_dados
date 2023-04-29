typedef struct lista Lista;

/* Cria uma lista vazia.*/
Lista* lst_cria(); 

/* Testa se uma lista é vazia.*/
int lst_vazia(Lista *l); 

/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info); 

/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info); 

/* Imprime uma lista.*/
void lst_imprime(Lista *l); 

/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info); 

/* Libera o espaço alocado por uma lista.*/
void lst_libera(Lista *l);

/*Remove um elemento de uma lista usando recursão.*/
Lista* lst_remove_rec(Lista *l, int info);

/*Imprime uma lista encadeada invertida usando recursão.*/
void lst_imprime_invertida_rec(Lista *l);

/*1. a) função que calcule o número de nós de uma lista. Essa função deve obedecer ao
protótipo:
*/
int comprimento(Lista* l);

/*2. b) função para retornar o número de nós da lista que possuem o campo info com valor
menor que n. Essa função deve obedecer ao protótipo:
*/
int menores(Lista* l, int n);

/*c) função para somar os valores do campo info de todos os nós. Essa função deve
obedecer ao protótipo:
*/
int soma(Lista *l);

/*d) função para retornar o número de nós da lista que possuem o campo info com
número primo. Essa função deve obedecer ao protótipo:*/
int primos(Lista *l);

/*e) função para criar uma lista que é a concatenação de uma lista l2 no final de uma lista
l1. Essa função deve obedecer ao protótipo:*/
Lista* lst_conc(Lista* l1, Lista* l2);

/*f) função que faça a diferença de duas listas L1 e L2 (ou seja, que retire de L1 os
elementos que estão em L2). Por exemplo, se lista L1 ? 3 ? 7 ? 2 ? 4 ? // e lista L2
? 7 ? 9 ? //, a lista L1 modificada deve ser L1 ? 3 ? 2 ? 4 ? //. Essa função deve
obedecer ao protótipo:
*/
Lista* lst_diferenca(Lista* l1, Lista* l2);



