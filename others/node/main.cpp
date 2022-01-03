#include <iostream>
#include "./headers/node.h"
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  Node *n1 = new Node(1);
  Node *n2 = new Node(2);
  n1->pointTo(n2);
  Node *n3 = new Node(3);
  n2->pointTo(n3);
  cout << n1->getNext()->getValue() << endl;
  delete n1, n2, n3;
  return 0;
}