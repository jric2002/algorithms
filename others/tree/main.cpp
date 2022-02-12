#include <iostream>
#include "./headers/node.h"
#include "./headers/tree.h"
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  Tree<int> *t = new Tree<int>();
  t->pushRoot(1);
  return 0;
}