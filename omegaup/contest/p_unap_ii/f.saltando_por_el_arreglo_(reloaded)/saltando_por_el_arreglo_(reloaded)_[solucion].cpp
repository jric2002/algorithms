#include <iostream>
using namespace std;
int main() {
  unsigned short int n;
  short int saltos, pos, *arreglo;
  cin >> n;
  arreglo = new short int[n];
  for (unsigned short int i = 0; i < n; i++) {
    cin >> arreglo[i];
  }
  saltos = pos = 0;
  for (short int p = 0; p != n - 1;) {
    p += arreglo[p];
    saltos++;
    if (p < 0 || p >= n || saltos > 3 * n) {
      saltos = -1;
      break;
    }
  }
  cout << saltos << endl;
  delete[] arreglo;
  return 0;
}