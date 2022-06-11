#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int limak_weight, bob_weight;
  unsigned short int years = 0;
  cin >> limak_weight >> bob_weight;
  while (limak_weight <= bob_weight) {
    limak_weight = limak_weight * 3;
    bob_weight = bob_weight * 2;
    years++;
  }
  cout << years << endl;
  return 0;
}