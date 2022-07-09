#include <iostream>
#include "./headers/node.h"
#include "./headers/stack.h"
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  Stack<int> *s = new Stack<int>();
  s->push(1);
  s->push(2);
  s->push(3);
  s->push(4);
  s->push(5);
  Node<int> *aux = s->getTop();
  while (aux != NULL) {
    cout << aux->getValue() << " ";
    aux = aux->getNext();
  }
  cout << endl;
  delete s, aux;
  return 0;
}