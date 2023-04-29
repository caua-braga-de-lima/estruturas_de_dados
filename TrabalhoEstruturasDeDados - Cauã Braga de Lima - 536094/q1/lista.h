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

/*1. a) fun��o que calcule o n�mero de n�s de uma lista. Essa fun��o deve obedecer ao
prot�tipo:
*/
int comprimento(Lista* l);

/*2. b) fun��o para retornar o n�mero de n�s da lista que possuem o campo info com valor
menor que n. Essa fun��o deve obedecer ao prot�tipo:
*/



