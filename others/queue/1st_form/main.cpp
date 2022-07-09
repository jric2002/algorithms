#include <iostream>
#include "./headers/node.h"
#include "./headers/queue.h"
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  Queue<int> *q = new Queue<int>();
  q->push(1);
  q->push(2);
  q->push(3);
  q->push(4);
  q->push(5);
  Node<int> *aux = q->getFirst();
  while (aux != NULL) {
    cout << aux->getValue() << " ";
    aux = aux->getNext();
  }
  cout << endl;
  delete q, aux;
  return 0;
}