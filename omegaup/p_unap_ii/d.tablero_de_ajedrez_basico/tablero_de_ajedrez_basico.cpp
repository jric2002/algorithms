#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int size_t;
  char white = '0', black = 'X';
  cin >> size_t;
  for (int r = 1; r <= 8; r++) {
    for (int rr = 1; rr <= size_t; rr++) {
      for (int c = 1; c <= 8; c++) {
        for (int cc = 1; cc <= size_t; cc++) {
          if ((r % 2) != 0) {
            if ((c % 2) != 0) {
              cout << black;
            }
            else {
              cout << white;
            }
          }
          else {
            if ((c % 2) != 0) {
              cout << white;
            }
            else {
              cout << black;
            }
          }
        }
      }
      cout << endl;
    }
  }
  return 0;
}
/* Definition */