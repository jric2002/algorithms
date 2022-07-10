#include <stdio.h>
#include <stdlib.h>
/* Author: José Rodolfo (jric2002) */
struct Node {
  int value;
  struct Node *next;
};
struct Stack {
  struct Node *top;
};
struct Node *top(struct Stack *s) {
  return s->top;
}
void push(struct Stack *s, int v) {
  struct Node *n = malloc(sizeof(struct Node));
  n->value = v;
  n->next = s->top;
  s->top = n;
}
void pop(struct Stack *s) {
  if (s->top != NULL) {
    struct Node *aux;
    aux = s->top;
    s->top = aux->next;
    free(aux);
  }
};
void clear(struct Stack *s) {
  struct Node *aux;
  while (s->top != NULL) {
    aux = s->top;
    s->top = aux->next;
    free(aux);
  }
}
void display(struct Stack *s) {
  struct Node *aux;
  aux = s->top;
  if (aux == NULL) {
    printf("The stack is empty");
  }
  else {
    printf("Stack: ");
    while (aux != NULL) {
      printf("%i ", aux->value);
      aux = aux->next;
    }
  }
}
int main() {
  int op, x;
  struct Stack *s = malloc(sizeof(struct Stack));
  s->top = NULL;
  do {
    printf("Stack implementation in C:\n");
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
        push(s, x);
        printf("Done...");
        break;
      case 2:
        pop(s);
        printf("Done...");
        break;
      case 3:
        clear(s);
        printf("Done...");
        break;
      case 4:
        display(s);
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
  clear(s);
  free(s);
  return 0;
}