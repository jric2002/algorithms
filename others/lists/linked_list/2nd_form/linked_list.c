#include <stdio.h>
#include <stdlib.h>
/* Author: José Rodolfo (jric2002) */
struct Node {
  int value;
  struct Node *next;
};
struct LL {
  struct Node *front;
  struct Node *back;
};
void insertFront(struct LL *ll, int v) {
  struct Node *n = malloc(sizeof(struct Node));
  n->value = v;
  n->next = ll->front;
  if (ll->front == NULL) {
    ll->back = n;
  }
  ll->front = n;
}
void insertBack(struct LL *ll, int v) {
  struct Node *n = malloc(sizeof(struct Node));
  n->value = v;
  if (ll->back == NULL) {
    ll->front = n;
  }
  else {
    ll->back->next = n;
  }
  n->next = NULL;
  ll->back = n;
}
void clear(struct LL *ll) {
  struct Node *aux;
  while (ll->front != NULL) {
    aux = ll->front;
    ll->front = aux->next;
    free(aux);
  }
}
void display(struct LL *ll) {
  struct Node *aux;
  aux = ll->front;
  if (aux == NULL) {
    printf("The LL is empty");
  }
  else {
    printf("LL: ");
    while (aux != NULL) {
      printf("%i ", aux->value);
      aux = aux->next;
    }
  }
}
int main() {
  int op, x;
  struct LL *ll = malloc(sizeof(struct LL));
  ll->front = NULL;
  ll->back = NULL;
  do {
    printf("LL implementation in C:\n");
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
        insertFront(ll, x);
        printf("Done...");
        break;
      case 2:
        printf("New value: ");
        scanf("%i", &x);
        insertBack(ll, x);
        printf("Done...");
        break;
      case 3:
        clear(ll);
        printf("Done...");
        break;
      case 4:
        display(ll);
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
  clear(ll);
  free(ll);
  return 0;
}