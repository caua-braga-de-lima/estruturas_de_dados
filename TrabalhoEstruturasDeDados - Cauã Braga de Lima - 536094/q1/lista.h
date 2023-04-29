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

/*1. a) função que calcule o número de nós de uma lista. Essa função deve obedecer ao
protótipo:
*/
int comprimento(Lista* l);

/*2. b) função para retornar o número de nós da lista que possuem o campo info com valor
menor que n. Essa função deve obedecer ao protótipo:
*/



