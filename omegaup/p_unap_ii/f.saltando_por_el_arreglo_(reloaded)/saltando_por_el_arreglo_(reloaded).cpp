#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  unsigned short int n;
  short int saltos, pos, *arreglo;
  cin >> n;
  arreglo = new short int[n];
  for (unsigned short int i = 0; i < n; i++) {
    cin >> arreglo[i];
  }
  saltos = pos = 0;
  while (pos != (n - 1)) {
    if ((pos + arreglo[pos]) >= 0) {
      if (arreglo[pos] != 0) {
        if ((arreglo[pos] + arreglo[pos + arreglo[pos]]) != 0) {
          pos += arreglo[pos];
          saltos++;
          continue;
        }
      }
    }
    saltos = -1;
    break;
  }
  cout << saltos << endl;
  delete[] arreglo;
  return 0;
}
/* Definition */