#include <iostream>
#include "./headers/node.h"
#include "./headers/bst.h"
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
void showTree(Node<int> *, int);
int main() {
  BST<int> *bst = new BST<int>();
  bst->insert(5);
  bst->insert(3);
  bst->insert(8);
  bst->insert(1);
  bst->insert(6);
  bst->insert(4);
  bst->insert(10);
  // Show tree
  showTree(bst->root, 0);
  delete bst;
  return 0;
}
/* Definition */
void showTree(Node<int> *r, int c) {
  if (r != NULL) {
    showTree(r->right, c + 1);
    for (int i = 0; i < c; i++) {
      cout << "    ";
    }
    cout << r->value << endl;
    showTree(r->left, c + 1);
  }
}