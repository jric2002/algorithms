#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, p, sum = 0;
  float juice_volume;
  cin >> n;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> p;
    sum += p;
  }
  juice_volume = (float)(sum) / n;
  cout << juice_volume << endl;
  return 0;
}