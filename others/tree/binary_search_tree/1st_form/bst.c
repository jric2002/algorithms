#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node {
  int value;
  struct Node *left;
  struct Node *right;
};
struct BST {
  struct Node *root;
};
void insert(struct Node **r, int v) {
  if ((*r) == NULL) {
    (*r) = malloc(sizeof(struct Node));
    (*r)->value = v;
    (*r)->left = NULL;
    (*r)->right = NULL;
  }
  else {
    if (v < (*r)->value) {
      insert(&((*r)->left), v);
    }
    else {
      insert(&((*r)->right), v);
    }
  }
}
void preorder(struct Node *aux) {
  if (aux != NULL) {
    printf("%i ", aux->value);
    preorder(aux->left);
    preorder(aux->right);
  }
};
void inorder(struct Node *aux) {
  if (aux != NULL) {
    inorder(aux->left);
    printf("%i ", aux->value);
    inorder(aux->right);
  }
};
void postorder(struct Node *aux) {
  if (aux != NULL) {
    postorder(aux->left);
    postorder(aux->right);
    printf("%i ", aux->value);
  }
};
void display(struct Node *aux, int c) {
  if (aux != NULL) {
    display(aux->right, c + 1);
    for (int i = 0; i < c; i++) {
      printf("    ");
    }
    printf("%i\n", aux->value);
    display(aux->left, c + 1);
  }
}
int main() {
  int op, x;
  struct BST *bst = malloc(sizeof(struct BST));
  bst->root = NULL;
  while (true) {
    printf("BST implementation in C:\n");
    printf("1. Insert\n");
    printf("2. Preorder\n");
    printf("3. Inorder\n");
    printf("4. Postorder\n");
    printf("5. Display\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
    scanf("%i", &op);
    if (op == 1) {
      printf("New value: ");
      scanf("%i", &x);
      insert(&(bst->root), x);
      printf("Done...");
    }
    else if (op == 2) {
      printf("Preorder: ");
      preorder(bst->root);
    }
    else if (op == 3) {
      printf("Inorder: ");
      inorder(bst->root);
    }
    else if (op == 4) {
      printf("Postorder: ");
      postorder(bst->root);
    }
    else if (op == 5) {
      printf("\n");
      display(bst->root, 0);
    }
    else if (op == 0) {
      printf("Leave...");
      break;
    }
    else {
      printf("That option does not exist...xD");
    }
    printf("\n\n");
  }
  free(bst);
  return 0;
}