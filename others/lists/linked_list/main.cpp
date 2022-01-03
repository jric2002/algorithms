#include <iostream>
#include "./headers/node.h"
#include "./headers/linked_list.h"
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  LinkedList<int> *l = new LinkedList<int>();
  l->pushLast(1);
  l->pushLast(2);
  l->pushLast(3);
  l->pushLast(4);
  l->pushLast(5);
  Node<int> *aux = l->getFirst();
  while (aux != NULL) {
    cout << aux->getValue() << " ";
    aux = aux->getNext();
  }
  delete l, aux;
  return 0;
}