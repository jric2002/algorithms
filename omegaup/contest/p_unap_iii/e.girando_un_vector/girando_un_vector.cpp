#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, g;
  int *numeros;
  cin >> n >> g;
  numeros = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> numeros[i];
  }
  g = g % n;
  if (g == 0) {
    g = n;
  }
  for (int i = (n - g); i < n; i++) {
    cout << numeros[i] << " ";
  }
  for (int i = 0; i < (n - g); i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;
  return 0;
}
/* Definition */