typedef struct ponto Ponto;

Ponto* criar_ponto(float x, float y);

void liberar_ponto(Ponto *p);

void acessar_ponto(Ponto *p, float *x, float *y);

void atribuir_ponto(Ponto *p, float x, float y);

float distancia_pontos(Ponto *p1, Ponto *p2);
