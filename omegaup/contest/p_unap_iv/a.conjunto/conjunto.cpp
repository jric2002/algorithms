#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  char t[100];
  int size_t, p;
  bool estado;
  cin >> t;
  size_t = strlen(t);
  estado = true;
  p = 0;
  for (int i = 0; i < size_t; i++) {
    if (t[i] == '(') {
      p++;
    }
    else if (t[i] == ')') {
      if (p == 0) {
        estado = false;
        break;
      }
      else {
        p--;
      }
    }
    else {
      if (t[i] != 'a' && t[i] != 'b' && t[i] != 'c' && t[i] != 'd') {
        estado = false;
        break;
      }
    }
  }
  if (p != 0) {
    estado = false;
  }
  cout << estado << endl;
  return 0;
}
/* Definition */