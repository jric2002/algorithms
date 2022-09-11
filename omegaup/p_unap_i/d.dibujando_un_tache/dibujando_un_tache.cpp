#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
void imprimirEspacios(int);
int main() {
  int n, i, esp_lat, esp_med;
  cin >> n;
  esp_lat = 0;
  esp_med = n - 2;
  i = 1;
  while (i <= n) {
    imprimirEspacios(esp_lat);
    if (i == ((n + 1) / 2)) {
      cout << "@";
    }
    else {
      cout << "@";
      imprimirEspacios(esp_med);
      cout << "@";
    }
    cout << endl;
    if (i < ((n + 1) / 2)) {
      esp_lat++;
      esp_med -= 2;
    }
    else {
      esp_lat--;
      esp_med += 2;
    }
    i++;
  }
  return 0;
}
/* Definition */
void imprimirEspacios(int n) {
  for (int i = 0; i < n; i++) {
    cout << " ";
  }
}