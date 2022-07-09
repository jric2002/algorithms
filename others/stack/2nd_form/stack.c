#include <stdio.h>
#include <stdlib.h>
/* Author: José Rodolfo (jric2002) */
struct Nodo {
  int valor;
  struct Nodo *sig;
};
struct Pila {
  struct Nodo *cima;
};
struct Nodo *obtenerCima(struct Pila *pila) {
  return pila->cima;
}
void apilar(struct Pila *pila, int v) {
  struct Nodo *n = malloc(sizeof(struct Nodo));
  n->valor = v;
  n->sig = pila->cima;
  pila->cima = n;
}
void desapilar(struct Pila *pila) {
  struct Nodo *aux;
  aux = pila->cima;
  pila->cima = aux->sig;
  free(aux);
};
void vaciarPila(struct Pila *pila) {
  struct Nodo *aux;
  while (pila->cima != NULL) {
    aux = pila->cima;
    pila->cima = aux->sig;
    free(aux);
  }
}
void mostrarPila(struct Pila *pila) {
  struct Nodo *aux;
  aux = pila->cima;
  if (aux == NULL) {
    printf("La pila esta vacia");
  }
  else {
    printf("Pila: ");
    while (aux != NULL) {
      printf("%i ", aux->valor);
      aux = aux->sig;
    }
  }
}
int main() {
  int op, x;
  struct Pila *p = malloc(sizeof(struct Pila));
  p->cima = NULL;
  do {
    printf("Implementacion de Pila en C:\n");
    printf("1. Apilar\n");
    printf("2. Desapilar\n");
    printf("3. Vaciar pila\n");
    printf("4. Mostrar pila\n");
    printf("5. Salir\n");
    printf("Ingrese opcion: ");
    scanf("%i", &op);
    switch (op) {
      case 1:
        printf("Nuevo valor: ");
        scanf("%i", &x);
        apilar(p, x);
        printf("Apilando...");
        break;
      case 2:
        desapilar(p);
        printf("Desapilando...");
        break;
      case 3:
        vaciarPila(p);
        printf("Vaciando pila...");
        break;
      case 4:
        mostrarPila(p);
        break;
      case 5:
        printf("Saliendo...");
        break;
      default:
        printf("No existe esa opcion...xD");
        break;
    }
    printf("\n\n");
  } while (op != 5);
  vaciarPila(p);
  free(p);
  return 0;
}