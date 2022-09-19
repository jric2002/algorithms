#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  char qwerty_chars_pos[26] = {
    1, 5, 3, 3,
    3, 4, 5, 6,
    8, 7, 8, 9,
    7, 6, 9, 0,
    1, 4, 2, 5,
    7, 4, 2, 2,
    6, 1
  };
  char p[1000];
  int size_p, suma;
  cin >> p;
  size_p = strlen(p);
  suma = 0;
  for (int i = 0; i < size_p; i++) {
    suma += qwerty_chars_pos[(int)(p[i]) - 65];
  }
  cout << suma << endl;
  return 0;
}
/* Definition */