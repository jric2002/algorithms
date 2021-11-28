#include <iostream>

/* Author: José Rodolfo (jric2002) */

using namespace std;

int main() {
  unsigned short int n;
  cin >> n;
  if (n >= 1 && n <= 1000) {
    unsigned short int probability;
    unsigned short int solutions = 0;
    bool petya, vasya, tonya;
    for (unsigned short int r = 0; r < n; r++) {
      cin >> petya >> vasya >> tonya;
      probability = petya + vasya + tonya;
      if (probability >= 2) {
        solutions++;
      }
    }
    cout << solutions << endl;
  }
  return 0;
}