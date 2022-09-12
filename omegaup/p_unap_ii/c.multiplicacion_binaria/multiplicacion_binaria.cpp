#include <iostream>
#include <algorithm>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  char b1[101], b2[101], *rb, delimiter = '1';
  int size_b1, size_b2, size_rb;
  cin.ignore(100, delimiter);
  b1[0] = delimiter;
  cin >> (b1 + 1);
  size_b1 = strlen(b1);
  b1[size_b1] = '\0';
  cin.ignore(100, delimiter);
  b2[0] = delimiter;
  cin >> (b2 + 1);
  size_b2 = strlen(b2);
  b2[size_b2] = '\0';
  size_rb = (size_b1 + size_b2) - 1;
  rb = new char[size_rb];
  for (int i = size_rb; i < size_b2; i++) {
    for (int j = 0; j < size_b2; j++) {

    }
  }
  delete[] r_b;
  return 0;
}
/* Definition */