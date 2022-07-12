#include <stdio.h>
#include <stdlib.h>
/* Author: José Rodolfo (jric2002) */
struct Node {
  int value;
  struct Node *next;
  struct Node *previous;
};
struct DLL {
  struct Node *front;
  struct Node *back;
};
void insertFront(struct DLL *dll, int v) {
  struct Node *n = malloc(sizeof(struct Node));
  n->value = v;
  n->next = dll->front;
  if (dll->front != NULL) {
    dll->front->previous = n;
  }
  else {
    dll->back = n;
  }
  n->previous = NULL;
  dll->front = n;
}
void insertBack(struct DLL *dll, int v) {
  struct Node *n = malloc(sizeof(struct Node));
  n->value = v;
  n->previous = dll->back;
  if (dll->back != NULL) {
    dll->back->next = n;
  }
  else {
    dll->front = n;
  }
  n->next = NULL;
  dll->back = n;
}
void clear(struct DLL *dll) {
  struct Node *aux;
  while (dll->front != NULL) {
    aux = dll->front;
    dll->front = aux->next;
    free(aux);
  }
}
void display(struct DLL *dll) {
  struct Node *aux;
  aux = dll->front;
  if (aux == NULL) {
    printf("The DLL is empty");
  }
  else {
    printf("DLL: ");
    while (aux != NULL) {
      printf("%i ", aux->value);
      aux = aux->next;
    }
  }
}
int main() {
  int op, x;
  struct DLL *dll = malloc(sizeof(struct DLL));
  dll->front = NULL;
  dll->back = NULL;
  do {
    printf("DLL implementation in C:\n");
    printf("1. Insert to front\n");
    printf("2. Insert to back\n");
    printf("3. Clear\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
    scanf("%i", &op);
    switch (op) {
      case 1:
        printf("New value: ");
        scanf("%i", &x);
        insertFront(dll, x);
        printf("Done...");
        break;
      case 2:
        printf("New value: ");
        scanf("%i", &x);
        insertBack(dll, x);
        printf("Done...");
        break;
      case 3:
        clear(dll);
        printf("Done...");
        break;
      case 4:
        display(dll);
        break;
      case 5:
        printf("Leave...");
        break;
      default:
        printf("That option does not exist...xD");
        break;
    }
    printf("\n\n");
  } while (op != 5);
  clear(dll);
  free(dll);
  return 0;
}