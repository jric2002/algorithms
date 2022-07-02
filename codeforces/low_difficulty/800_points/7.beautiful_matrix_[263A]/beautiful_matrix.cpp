#include <iostream>
/* Author: José Rodolfo (jric2002) */
unsigned short int absoluteValue(signed short int number) {
  return (number >= 0) ? number : (-1 * number);
}
using namespace std;
int main() {
  bool matrix[5][5];
  unsigned short int min_num_mov = 0;
  for (unsigned short int r = 0; r < 5; r++) {
    for (unsigned short int c = 0; c < 5; c++) {
      cin >> matrix[r][c];
      if (matrix[r][c] == 1) {
        min_num_mov = absoluteValue(3 - (r + 1)) + absoluteValue(3 - (c + 1));
      }
    }
  }
  cout << min_num_mov << endl;
  return 0;
}