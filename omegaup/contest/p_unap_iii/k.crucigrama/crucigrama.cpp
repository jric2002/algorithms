#include <iostream>
#include <cstring>
#include <utility>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  char A[30], B[30];
  int size_A, size_B;
  pair<int, int> cruce;
  bool estado;
  cin >> A >> B;
  size_A = strlen(A);
  size_B = strlen(B);
  estado = true;
  for (int i = 0; i < size_A && estado; i++) {
    for (int j = 0; j < size_B; j++) {
      if (A[i] == B[j]) {
        cruce = make_pair(j, i);
        estado = false;
        break;
      }
    }
  }
  for (int i = 0; i < size_B; i++) {
    if (i == cruce.first) {
      cout << A;
    }
    else {
      for (int j = 0; j < size_A; j++) {
        if (j == cruce.second) {
          cout << B[i];
        }
        else {
          cout << ".";
        }
      }
    }
    cout << endl;
  }
  return 0;
}
/* Definition */