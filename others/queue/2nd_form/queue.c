#include <stdio.h>
#include <stdlib.h>
/* Author: José Rodolfo (jric2002) */
struct Node {
  int value;
  struct Node *next;
};
struct Queue {
  struct Node *front;
  struct Node *back;
};
void push(struct Queue *q, int v) {
  struct Node *n = malloc(sizeof(struct Node));
  n->value = v;
  if (q->front == NULL) {
    q->front = n;
    q->back = n;
  }
  else {
    q->back->next = n;
    q->back = n;
  }
  n->next = NULL;
}
void pop(struct Queue *q) {
  if (q->front != NULL) {
    struct Node *aux;
    aux = q->front;
    q->front = aux->next;
    free(aux);
  }
}
void clear(struct Queue *q) {
  struct Node *aux;
  while (q->front != NULL) {
    aux = q->front;
    q->front = aux->next;
    free(aux);
  }
}
void display(struct Queue *q) {
  struct Node *aux;
  aux = q->front;
  if (aux == NULL) {
    printf("The queue is the empty");
  }
  else {
    printf("Queue: ");
    while (aux != NULL) {
      printf("%i ", aux->value);
      aux = aux->next;
    }
  }
}
int main() {
  int op, x;
  struct Queue *q = malloc(sizeof(struct Queue));
  q->front = NULL;
  q->back = NULL;
  do {
    printf("Queue implementation in C:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Clear\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
    scanf("%i", &op);
    switch (op) {
      case 1:
        printf("New value: ");
        scanf("%i", &x);
        push(q, x);
        printf("Done!");
        break;
      case 2:
        pop(q);
        printf("Done!");
        break;
      case 3:
        clear(q);
        printf("Done!");
        break;
      case 4:
        display(q);
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
  clear(q);
  free(q);
  return 0;
}