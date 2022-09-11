#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  float precio_producto, monto_estudiante, r;
  string output;
  cin >> precio_producto;
  cin >> monto_estudiante;
  r = precio_producto - monto_estudiante;
  cout << fixed;
  cout.precision(2);
  if (r == 0) {
    cout << "Cabal Casero" << endl;;
  }
  else if (r > 0) {
    cout << "Faltan " << r << " Bs.";
  }
  else {
    r = -r;
    cout << "Hay " << r << " Bs. de cambio";
  }
  cout.unsetf(ios::fixed);
  return 0;
}
/* Definition */