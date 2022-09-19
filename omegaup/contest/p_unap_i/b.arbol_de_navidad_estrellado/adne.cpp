#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
void imprimirEspacios(int);
int main() {
  int n, nivel;
  cin >> n;
  nivel = 1;
  while (nivel <= (n + 1)) {
    imprimirEspacios(n - (nivel - 1));
    if (nivel == 1) {
      cout << '*' << endl;
    }
    else {
      for (int j = 1; j <= (3 + 2 * ((nivel - 1) - 1)); j++) {
        cout << 'o';
      }
      cout << endl;
    }
    nivel++;
  }
  return 0;
}
/* Definition */
void imprimirEspacios(int n) {
  for (int i = 1; i <= n; i++) {
    cout << " ";
  }
}