#include <stdio.h>
#include <stdlib.h>
/* Author: José Rodolfo (jric2002) */
struct Nodo {
  int valor;
  struct Nodo *sig;
};
struct Cola {
  struct Nodo *primero;
  struct Nodo *ultimo;
};
void encolar(struct Cola *cola, int v) {
  struct Nodo *n = malloc(sizeof(struct Nodo));
  n->valor = v;
  if (cola->primero == NULL) {
    cola->primero = n;
    cola->ultimo = n;
  }
  else {
    cola->ultimo->sig = n;
    cola->ultimo = n;
  }
  n->sig = NULL;
}
void desencolar(struct Cola *cola) {
  struct Nodo *aux;
  aux = cola->primero;
  cola->primero = aux->sig;
  free(aux);
}
void vaciarCola(struct Cola *cola) {
  struct Nodo *aux;
  while (cola->primero != NULL) {
    aux = cola->primero;
    cola->primero = aux->sig;
    free(aux);
  }
}
void mostrarCola(struct Cola *cola) {
  struct Nodo *aux;
  aux = cola->primero;
  if (aux == NULL) {
    printf("La cola esta vacia");
  }
  else {
    printf("Cola: ");
    while (aux != NULL) {
      printf("%i ", aux->valor);
      aux = aux->sig;
    }
  }
}
int main() {
  int op, x;
  struct Cola *c = malloc(sizeof(struct Cola));
  c->primero = NULL;
  c->ultimo = NULL;
  do {
    printf("Implementacion de Cola en C:\n");
    printf("1. Encolar\n");
    printf("2. Desencolar\n");
    printf("3. Vaciar cola\n");
    printf("4. Mostrar cola\n");
    printf("5. Salir\n");
    printf("Ingrese opcion: ");
    scanf("%i", &op);
    switch (op) {
      case 1:
        printf("Nuevo valor: ");
        scanf("%i", &x);
        encolar(c, x);
        printf("Encolando...");
        break;
      case 2:
        desencolar(c);
        printf("Desencolando...");
        break;
      case 3:
        vaciarCola(c);
        printf("Vaciando cola...");
        break;
      case 4:
        mostrarCola(c);
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
  vaciarCola(c);
  free(c);
  return 0;
}