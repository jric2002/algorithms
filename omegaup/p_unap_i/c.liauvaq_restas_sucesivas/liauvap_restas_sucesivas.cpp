#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int dividendo, divisor, cociente, residuo;
  cin >> dividendo;
  cin >> divisor;
  cociente = 0;
  while ((dividendo - divisor) >= 0) {
    dividendo = dividendo - divisor;
    cociente++;
  }
  residuo = dividendo;
  cout << "Cociente:" << cociente << endl;
  cout << "Residuo:" << residuo << endl;
  return 0;
}
/* Definition */