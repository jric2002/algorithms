#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, m, l, r;
  long long *presumas, suma_parcial;
  int *dinero_por_mes;
  cin >> n;
  dinero_por_mes = new int[n]{0};
  presumas = new long long int[n]{0};
  suma_parcial = 0;
  for (int i = 0; i < n; i++) {
    cin >> dinero_por_mes[i];
    suma_parcial += dinero_por_mes[i];
    presumas[i] = suma_parcial;
  }
  cin >> m;
  while (m--) {
    cin >> l >> r;
    cout << (presumas[r - 1] - (presumas[l - 1] - dinero_por_mes[l - 1])) << endl;
  }
  delete[] presumas;
  delete[] dinero_por_mes;
  return 0;
}
/* Definition */